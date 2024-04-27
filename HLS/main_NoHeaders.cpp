#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <opencv2/opencv.hpp>

class Conv2d {
private:
    std::vector<std::vector<std::vector<std::vector<double>>>> weight;
    std::vector<double> bias;

public:
    Conv2d(int in_channels, int out_channels, int kernel_size) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::normal_distribution<double> dist(0.0, 1.0);

        weight.resize(out_channels, std::vector<std::vector<std::vector<double>>>(in_channels, std::vector<std::vector<double>>(kernel_size, std::vector<double>(kernel_size))));
        bias.resize(out_channels);

        for (auto& oc : weight) {
            for (auto& ic : oc) {
                for (auto& row : ic) {
                    for (auto& val : row) {
                        val = dist(gen);
                    }
                }
            }
        }

        for (auto& val : bias) {
            val = dist(gen);
        }
    }

    std::vector<std::vector<std::vector<std::vector<double>>>> forward(const std::vector<std::vector<std::vector<std::vector<double>>>>& x) {
        int batch_size = x.size();
        int in_channels = x[0].size();
        int in_height = x[0][0].size();
        int in_width = x[0][0][0].size();
        int out_channels = weight.size();
        int kernel_size = weight[0][0].size();
        int out_height = in_height - kernel_size + 1;
        int out_width = in_width - kernel_size + 1;

        std::vector<std::vector<std::vector<std::vector<double>>>> out(batch_size, std::vector<std::vector<std::vector<double>>>(out_channels, std::vector<std::vector<double>>(out_height, std::vector<double>(out_width))));

        for (int b = 0; b < batch_size; ++b) {
            for (int oc = 0; oc < out_channels; ++oc) {
                for (int ic = 0; ic < in_channels; ++ic) {
                    for (int i = 0; i < out_height; ++i) {
                        for (int j = 0; j < out_width; ++j) {
                            double sum = 0.0;
                            for (int ki = 0; ki < kernel_size; ++ki) {
                                for (int kj = 0; kj < kernel_size; ++kj) {
                                    sum += x[b][ic][i + ki][j + kj] * weight[oc][ic][ki][kj];
                                }
                            }
                            out[b][oc][i][j] += sum;
                        }
                    }
                }
                for (int i = 0; i < out_height; ++i) {
                    for (int j = 0; j < out_width; ++j) {
                        out[b][oc][i][j] += bias[oc];
                    }
                }
            }
        }

        return out;
    }
};

class Flatten {
public:
    std::vector<std::vector<double>> forward(const std::vector<std::vector<std::vector<std::vector<double>>>>& x) {
        int batch_size = x.size();
        int channels = x[0].size();
        int height = x[0][0].size();
        int width = x[0][0][0].size();

        std::vector<std::vector<double>> out(batch_size, std::vector<double>(channels * height * width));

        for (int b = 0; b < batch_size; ++b) {
            int idx = 0;
            for (int c = 0; c < channels; ++c) {
                for (int i = 0; i < height; ++i) {
                    for (int j = 0; j < width; ++j) {
                        out[b][idx++] = x[b][c][i][j];
                    }
                }
            }
        }

        return out;
    }
};

class Linear {
private:
    std::vector<std::vector<double>> weight;
    std::vector<double> bias;

public:
    Linear(int in_features, int out_features) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::normal_distribution<double> dist(0.0, 1.0);

        weight.resize(out_features, std::vector<double>(in_features));
        bias.resize(out_features);

        for (auto& row : weight) {
            for (auto& val : row) {
                val = dist(gen);
            }
        }

        for (auto& val : bias) {
            val = dist(gen);
        }
    }

    std::vector<std::vector<double>> forward(const std::vector<std::vector<double>>& x) {
        int batch_size = x.size();
        int out_features = weight.size();

        std::vector<std::vector<double>> out(batch_size, std::vector<double>(out_features));

        for (int b = 0; b < batch_size; ++b) {
            for (int i = 0; i < out_features; ++i) {
                double sum = 0.0;
                for (int j = 0; j < x[b].size(); ++j) {
                    sum += x[b][j] * weight[i][j];
                }
                out[b][i] = sum + bias[i];
            }
        }

        return out;
    }
};

class CNN {
private:
    Conv2d conv1;
    Conv2d conv2;
    Flatten flatten;
    int fc1_input_size;
    Linear fc1;
    Linear fc2;

public:
    CNN() : conv1(1, 8, 3), conv2(8, 16, 3), fc1_input_size(16 * (200 - 2 * 3 + 2) * (300 - 2 * 3 + 2)), fc1(fc1_input_size, 256), fc2(256, 3) {}

    std::vector<std::vector<double>> forward(const std::vector<std::vector<std::vector<std::vector<double>>>>& x) {
        auto x1 = conv1.forward(x);
        auto x2 = conv2.forward(x1);
        auto x3 = flatten.forward(x2);
        auto x4 = fc1.forward(x3);
        auto x5 = fc2.forward(x4);
        return x5;
    }
};

void classify_image(const std::string& image_path, CNN& model) {
    cv::Mat img = cv::imread(image_path);
    cv::resize(img, img, cv::Size(300, 200));
    cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);

    std::vector<std::vector<std::vector<std::vector<double>>>> input(1, std::vector<std::vector<std::vector<double>>>(1, std::vector<std::vector<double>>(img.rows, std::vector<double>(img.cols))));

    for (int i = 0; i < img.rows; ++i) {
        for (int j = 0; j < img.cols; ++j) {
            input[0][0][i][j] = static_cast<double>(img.at<uchar>(i, j)) / 255.0;
        }
    }

    auto prediction = model.forward(input);
    int predicted_label = std::max_element(prediction[0].begin(), prediction[0].end()) - prediction[0].begin();

    std::vector<std::string> label_names = {"Paper", "Scissors", "Rock"};

    std::cout << "Predicted label: " << label_names[predicted_label] << std::endl;
}

int main() {
    std::string image_path = "./paper/1jHtb93pI8f6pfKo.png";
    CNN model;
    classify_image(image_path, model);
    image_path = "./rock/01dM3ewPIsnBICu1.png";
    classify_image(image_path, model);
    image_path = "./scissors/1wZUIsowmZRmESjh.png";
    classify_image(image_path, model);

    return 0;
}