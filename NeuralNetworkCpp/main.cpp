#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <fstream>
#include <filesystem>

// Define the image dimensions
const int IMG_WIDTH = 28;
const int IMG_HEIGHT = 28;
const int NUM_CHANNELS = 1;

// Define the neural network architecture
const int NUM_CLASSES = 3;
const int FILTER_SIZE = 3;
const int NUM_FILTERS = 8;
const int HIDDEN_SIZE = 64;
const double LEARNING_RATE = 0.01;

// Activation function (ReLU)
double relu(double x)
{
    return std::max(0.0, x);
}

// Softmax function
std::vector<double> softmax(const std::vector<double> &x)
{
    std::vector<double> result(x.size());
    double sum = 0.0;
    for (double val : x)
    {
        sum += std::exp(val);
    }
    for (int i = 0; i < x.size(); i++)
    {
        result[i] = std::exp(x[i]) / sum;
    }
    return result;
}

// Convolution operation
std::vector<std::vector<double>> convolve(const std::vector<std::vector<double>> &input,
                                          const std::vector<std::vector<double>> &filter)
{
    int rows = input.size();
    int cols = input[0].size();
    int filter_size = filter.size();
    int output_rows = rows - filter_size + 1;
    int output_cols = cols - filter_size + 1;

    std::vector<std::vector<double>> output(output_rows, std::vector<double>(output_cols));

    for (int i = 0; i < output_rows; i++)
    {
        for (int j = 0; j < output_cols; j++)
        {
            double sum = 0.0;
            for (int m = 0; m < filter_size; m++)
            {
                for (int n = 0; n < filter_size; n++)
                {
                    sum += input[i + m][j + n] * filter[m][n];
                }
            }
            output[i][j] = sum;
        }
    }

    return output;
}

// Max pooling operation
std::vector<std::vector<double>> max_pool(const std::vector<std::vector<double>> &input, int pool_size)
{
    int rows = input.size();
    int cols = input[0].size();
    int output_rows = rows / pool_size;
    int output_cols = cols / pool_size;

    std::vector<std::vector<double>> output(output_rows, std::vector<double>(output_cols));

    for (int i = 0; i < output_rows; i++)
    {
        for (int j = 0; j < output_cols; j++)
        {
            double max_val = input[i * pool_size][j * pool_size];
            for (int m = 0; m < pool_size; m++)
            {
                for (int n = 0; n < pool_size; n++)
                {
                    max_val = std::max(max_val, input[i * pool_size + m][j * pool_size + n]);
                }
            }
            output[i][j] = max_val;
        }
    }

    return output;
}

// Flatten operation
std::vector<double> flatten(const std::vector<std::vector<double>> &input)
{
    std::vector<double> output;
    for (const auto &row : input)
    {
        output.insert(output.end(), row.begin(), row.end());
    }
    return output;
}

// CNN class
class CNN
{
private:
    std::vector<std::vector<std::vector<double>>> filters;
    std::vector<double> hidden_weights;
    std::vector<double> output_weights;

public:
    CNN()
    {
        // Initialize the filters, hidden weights, and output weights randomly
        std::random_device rd;
        std::mt19937 gen(rd());
        std::normal_distribution<> d(0, 0.1);

        filters.resize(NUM_FILTERS, std::vector<std::vector<double>>(FILTER_SIZE, std::vector<double>(FILTER_SIZE)));
        for (auto &filter : filters)
        {
            for (auto &row : filter)
            {
                for (auto &val : row)
                {
                    val = d(gen);
                }
            }
        }

        int num_hidden_inputs = NUM_FILTERS * ((IMG_WIDTH - FILTER_SIZE + 1) / 2) * ((IMG_HEIGHT - FILTER_SIZE + 1) / 2);
        hidden_weights.resize(num_hidden_inputs * HIDDEN_SIZE);
        for (auto &val : hidden_weights)
        {
            val = d(gen);
        }

        output_weights.resize(HIDDEN_SIZE * NUM_CLASSES);
        for (auto &val : output_weights)
        {
            val = d(gen);
        }
    }

    // Forward pass
    std::vector<std::vector<std::vector<double>>> forward(const std::vector<std::vector<double>> &input)
    {
        std::vector<std::vector<std::vector<double>>> conv_outputs;
        std::vector<std::vector<std::vector<double>>> pool_outputs;

        // Convolutional layer
        for (const auto &filter : filters)
        {
            conv_outputs.push_back(convolve(input, filter));
        }

        // ReLU activation
        for (auto &output : conv_outputs)
        {
            for (auto &row : output)
            {
                for (auto &val : row)
                {
                    val = relu(val);
                }
            }
        }

        // Max pooling layer
        for (const auto &output : conv_outputs)
        {
            pool_outputs.push_back(max_pool(output, 2));
        }

        return pool_outputs;
    }

    // Train the CNN
    // Train the CNN
    void train(const std::vector<std::vector<std::vector<double>>> &inputs,
               const std::vector<int> &labels,
               const std::vector<std::vector<std::vector<double>>> &pool_outputs,
               int num_epochs)
    {
        for (int epoch = 0; epoch < num_epochs; epoch++)
        {
            double loss = 0.0;

            for (int i = 0; i < inputs.size(); i++)
            {
                std::vector<double> output = forward(inputs[i]);
                int label = labels[i];

                // Calculate loss (cross-entropy)
                loss -= std::log(output[label]);

                // Backpropagation
                std::vector<double> output_delta(NUM_CLASSES);
                for (int j = 0; j < NUM_CLASSES; j++)
                {
                    output_delta[j] = (j == label) ? output[j] - 1 : output[j];
                }

                std::vector<double> hidden(HIDDEN_SIZE);
                for (int j = 0; j < HIDDEN_SIZE; j++)
                {
                    double sum = 0.0;
                    for (int k = 0; k < NUM_CLASSES; k++)
                    {
                        sum += output_delta[k] * output_weights[k * HIDDEN_SIZE + j];
                    }
                    hidden[j] = relu(sum);
                }

                // Update output weights
                for (int j = 0; j < HIDDEN_SIZE; j++)
                {
                    for (int k = 0; k < NUM_CLASSES; k++)
                    {
                        output_weights[k * HIDDEN_SIZE + j] -= LEARNING_RATE * output_delta[k] * hidden[j];
                    }
                }

                // Update hidden weights
                std::vector<double> hidden_delta(HIDDEN_SIZE);
                for (int j = 0; j < HIDDEN_SIZE; j++)
                {
                    double sum = 0.0;
                    for (int k = 0; k < NUM_CLASSES; k++)
                    {
                        sum += output_delta[k] * output_weights[k * HIDDEN_SIZE + j];
                    }
                    hidden_delta[j] = sum * (hidden[j] > 0);
                }

                std::vector<double> flattened = flatten(pool_outputs[i]);

                for (int j = 0; j < flattened.size(); j++)
                {
                    for (int k = 0; k < HIDDEN_SIZE; k++)
                    {
                        hidden_weights[k * flattened.size() + j] -= LEARNING_RATE * hidden_delta[k] * flattened[j];
                    }
                }
            }

            std::cout << "Epoch " << epoch + 1 << ", Loss: " << loss / inputs.size() << std::endl;
        }
    }

    // Predict the class of an input image
    int predict(const std::vector<std::vector<double>> &input)
    {
        std::vector<double> output = forward(input);
        return std::max_element(output.begin(), output.end()) - output.begin();
    }
};

// Load and preprocess the images
std::vector<std::vector<std::vector<double>>> load_images(const std::string &folder)
{
    std::vector<std::vector<std::vector<double>>> images;

    for (const auto &entry : std::filesystem::directory_iterator(folder))
    {
        if (entry.is_regular_file())
        {
            std::ifstream file(entry.path(), std::ios::binary);
            std::vector<std::vector<double>> img_data(IMG_HEIGHT, std::vector<double>(IMG_WIDTH));

            // Read the image data and preprocess
            for (int i = 0; i < IMG_HEIGHT; i++)
            {
                for (int j = 0; j < IMG_WIDTH; j++)
                {
                    unsigned char pixel;
                    file.read(reinterpret_cast<char *>(&pixel), sizeof(pixel));
                    img_data[i][j] = static_cast<double>(pixel) / 255.0;
                }
            }

            images.push_back(img_data);
        }
    }

    return images;
}

int main()
{
    // Load and preprocess the images
    std::vector<std::vector<std::vector<double>>> paper_images = load_images("../HLS/paper");
    std::vector<std::vector<std::vector<double>>> rock_images = load_images("../HLS/rock");
    std::vector<std::vector<std::vector<double>>> scissors_images = load_images("../HLS/scissors");

    // Prepare the training data
    std::vector<std::vector<std::vector<double>>> training_inputs;
    std::vector<int> training_labels;

    training_inputs.insert(training_inputs.end(), paper_images.begin(), paper_images.end());
    training_labels.insert(training_labels.end(), paper_images.size(), 0);

    training_inputs.insert(training_inputs.end(), rock_images.begin(), rock_images.end());
    training_labels.insert(training_labels.end(), rock_images.size(), 1);

    training_inputs.insert(training_inputs.end(), scissors_images.begin(), scissors_images.end());
    training_labels.insert(training_labels.end(), scissors_images.size(), 2);

    // Create and train the CNN
    CNN cnn;
    std::vector<std::vector<std::vector<double>>> pool_outputs;
    for (const auto &input : training_inputs)
    {
        std::vector<std::vector<std::vector<double>>> output = cnn.forward(input);
        pool_outputs.insert(pool_outputs.end(), output.begin(), output.end());
    }
    cnn.train(training_inputs, training_labels, pool_outputs, 10);

    // Test the CNN
    std::vector<std::vector<std::vector<double>>> test_images;
    std::vector<int> test_labels;
    test_images.insert(test_images.end(), paper_images.begin(), paper_images.begin() + 5);
    test_labels.insert(test_labels.end(), 5, 0);
    test_images.insert(test_images.end(), rock_images.begin(), rock_images.begin() + 5);
    test_labels.insert(test_labels.end(), 5, 1);
    test_images.insert(test_images.end(), scissors_images.begin(), scissors_images.begin() + 5);
    test_labels.insert(test_labels.end(), 5, 2);

    int correct_predictions = 0;
    for (int i = 0; i < test_images.size(); i++)
    {
        std::vector<std::vector<std::vector<double>>> pool_outputs = cnn.forward(test_images[i]);
        std::vector<double> flattened = flatten(pool_outputs[0]);
        for (int j = 1; j < pool_outputs.size(); j++)
        {
            std::vector<double> tmp = flatten(pool_outputs[j]);
            flattened.insert(flattened.end(), tmp.begin(), tmp.end());
        }
        int prediction = cnn.predict(flattened);
        std::cout << "True label: " << test_labels[i] << ", Predicted label: " << prediction << std::endl;
        if (prediction == test_labels[i])
        {
            correct_predictions++;
        }
    }

    std::cout << "Accuracy: " << static_cast<double>(correct_predictions) / test_images.size() << std::endl;

    return 0;
}