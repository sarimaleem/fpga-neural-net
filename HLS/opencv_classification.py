import os
import cv2
from PIL import Image
import numpy as np

from sklearn.metrics import confusion_matrix
import seaborn as sns
import matplotlib.pyplot as plt



def classify_image(image_path, dbg=False, param=0.057, s_thresh=5, r_thresh=4, p_thresh=3):
    # Load the image
    image = cv2.imread(image_path)

    # # Define the range for green color
    lower_green = np.array([36, 25, 25])
    upper_green = np.array([86, 255, 255])

    # Convert the image to HSV
    hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

    # Create a mask for green background
    mask = cv2.inRange(hsv, lower_green, upper_green)

    # Invert mask to get the hand
    hand_mask = cv2.bitwise_not(mask)

    # Use the mask to extract the hand
    hand = cv2.bitwise_and(image, image, mask=hand_mask)

    # Find contours
    contours, _ = cv2.findContours(hand_mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

    # cv2_imshow(hand)
    cv2.drawContours(hand, contours, -1, (0, 255, 0), 2)  # You can adjust the color and thickness here
    if dbg: cv2_imshow(hand)

    # Assuming the largest contour is the hand
    hand_contour = max(contours, key=cv2.contourArea)

    # Approximate the contour
    epsilon = param * cv2.arcLength(hand_contour, True)
    approx = cv2.approxPolyDP(hand_contour, epsilon, True)

    # Draw vertices on the image
    for point in approx:
        cv2.circle(hand, tuple(point[0]), 5, (0, 0, 255), -1)  # Draw a red circle at each vertex
    if dbg: cv2_imshow(hand)

    # Use the number of vertices in the approximated contour to classify
    vertices = len(approx)
    print(f"vertices for {image_path}: {vertices}")
    if vertices >= s_thresh:
        return 'Scissors'
    else:
      # Approximate the contour
      epsilon = 0.08 * cv2.arcLength(hand_contour, True)
      approx = cv2.approxPolyDP(hand_contour, epsilon, True)

      # Draw vertices on the image
      for point in approx:
          cv2.circle(hand, tuple(point[0]), 5, (0, 0, 255), -1)  # Draw a red circle at each vertex
      if dbg: cv2_imshow(hand)
      vertices = len(approx)
      print(f"vertices for {image_path}: {vertices}")
      if vertices >= r_thresh:
        return 'Rock'
      else: return 'Paper'

    # elif vertices == r_thresh:
    #     return 'Rock'
    # else:
    #     return 'Paper'

papers = os.listdir('./paper/')
rocks = os.listdir('./rock/')
scissors = os.listdir('./scissors/')

# confusion matrix

total = papers + rocks + scissors
correct = 0

# Initialize variables
predicted_labels = []
actual_labels = []

# Iterate through the dataset and make predictions
for i in range(len(total)):
    if 0 <= i < len(papers):
        result = classify_image(f"./paper/{papers[i]}", param=0.057)
        actual = "Paper"
    elif len(papers) <= i < len(papers) + len(rocks):
        result = classify_image(f"./rock/{rocks[i-len(papers)]}", param=0.057)
        actual = "Rock"
    else:
        result = classify_image(f"./scissors/{scissors[i-len(papers)-len(rocks)]}", param=0.057)
        actual = "Scissors"

    predicted_labels.append(result)
    actual_labels.append(actual)
    if actual == result: correct += 1

# Compute confusion matrix
conf_matrix = confusion_matrix(actual_labels, predicted_labels)

# Plot confusion matrix
plt.figure(figsize=(8, 6))
sns.heatmap(conf_matrix, annot=True, fmt='d', cmap='Blues', xticklabels=['Paper', 'Rock', 'Scissors'], yticklabels=['Paper', 'Rock', 'Scissors'])
plt.xlabel('Predicted Labels')
plt.ylabel('Actual Labels')
plt.title('Confusion Matrix')
plt.show()
print(f"accuracy: {correct/len(total)}")

