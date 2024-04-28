#include <iostream>
#include <filesystem>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

string classifyImage(const string& imagePath, bool dbg=false, double param=0.057, int sThresh=5, int rThresh=4, int pThresh=3) {
    Mat image = imread(imagePath);

    // Define the range for green color (HSV ONLY)
    Scalar lower_green = Scalar(36, 25, 25);
    Scalar upper_green = Scalar(86, 255, 255);

    // Convert the image to HSV
    Mat hsv;
    cvtColor(image, hsv, COLOR_BGR2HSV);

    // Create a mask for green background
    Mat mask;
    inRange(hsv, lower_green, upper_green, mask);

    // Invert mask to get the hand
    Mat handMask;
    bitwise_not(mask, handMask);

    // Use the mask to extract the hand
    Mat hand;
    bitwise_and(image, image, hand, handMask);

    // Find contours
    vector<vector<Point>> contours;
    findContours(handMask, contours, RETR_TREE, CHAIN_APPROX_SIMPLE);

    // Assuming the largest contour is the hand
    vector<Point> handContour = *max_element(contours.begin(), contours.end(), [](const vector<Point>& a, const vector<Point>& b) {
        return contourArea(a) < contourArea(b);
    });

    // Approximate the contour
    double epsilon = param * arcLength(handContour, true);
    vector<Point> approx;
    approxPolyDP(handContour, approx, epsilon, true);

    // Use the number of vertices in the approximated contour to classify
    int vertices = approx.size();
    cout << "Vertices for " << imagePath << ": " << vertices << endl;
    if (vertices >= sThresh) {
        return "Scissors";
    } else {
        // Approximate the contour again
        epsilon = 0.08 * arcLength(handContour, true);
        approxPolyDP(handContour, approx, epsilon, true);

        vertices = approx.size();
        cout << "Vertices for " << imagePath << ": " << vertices << endl;
        if (vertices >= rThresh) {
            return "Rock";
        } else {
            return "Paper";
        }
    }
}

int main() {
    string papersPath = "./paper/";
    string rocksPath = "./rock/";
    string scissorsPath = "./scissors/";

    // Perform classification
    vector<string> total, actualLabels, predictedLabels;

    // Classify paper images
    for (const auto& paper : filesystem::directory_iterator(papersPath)) {
        string result = classifyImage(paper.path(), true);
        predictedLabels.push_back(result);
        actualLabels.push_back("Paper");
    }

    // Classify rock images
    for (const auto& rock : filesystem::directory_iterator(rocksPath)) {
        string result = classifyImage(rock.path(), true);
        predictedLabels.push_back(result);
        actualLabels.push_back("Rock");
    }

    // Classify scissors images
    for (const auto& scissor : filesystem::directory_iterator(scissorsPath)) {
        string result = classifyImage(scissor.path(), true);
        predictedLabels.push_back(result);
        actualLabels.push_back("Scissors");
    }

    // Compute accuracy
    int correct = 0;
    for (size_t i = 0; i < actualLabels.size(); ++i) {
        if (actualLabels[i] == predictedLabels[i]) {
            correct++;
        }
    }
    double accuracy = static_cast<double>(correct) / actualLabels.size();

    // Display accuracy
    cout << "Accuracy: " << accuracy << endl;

    return 0;
}
