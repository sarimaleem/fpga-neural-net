from PIL import Image
import io as IO
import numpy as np
import cv2
import os
import sys

WIDTH = 15
LENGTH = 10

LOWER_GREEN_ONE = 36
LOWER_GREEN_TWO = 25
LOWER_GREEN_THREE = 25
lower_green = (LOWER_GREEN_ONE, LOWER_GREEN_TWO, LOWER_GREEN_THREE)

UPPER_GREEN_ONE = 86
UPPER_GREEN_TWO = 255
UPPER_GREEN_THREE = 255
upper_green = (UPPER_GREEN_ONE, UPPER_GREEN_TWO, UPPER_GREEN_THREE)

def main():
    img = cv2.imread(f"data/scissors/0CSaM2vL2cWX6Cay.png")
    image = cv2.resize(img, (WIDTH, LENGTH))
    hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

    arr = []
    for i in range(LENGTH):
        arr.append([0] * WIDTH)

    for i in range(LENGTH):
        arr.append([0] * WIDTH)

        for i in range(LENGTH):
            for j in range(WIDTH):
                if hsv[i][j][0] >= LOWER_GREEN_ONE and hsv[i][j][0] <= UPPER_GREEN_ONE and \
                        hsv[i][j][1] >= LOWER_GREEN_TWO and hsv[i][j][1] <= UPPER_GREEN_TWO and \
                        hsv[i][j][2] >= LOWER_GREEN_THREE and hsv[i][j][2] <= UPPER_GREEN_THREE:
                    arr[i][j] = 0
                else: 
                    arr[i][j] = 1

    # for i in range(LENGTH):
    #     for j in range(WIDTH):
    #         print(f"{1 if hand_mask[i][j] > 0 else 0} ", end="")
    #     print()

    print()
    for i in range(LENGTH):
        for j in range(WIDTH):
            print(f"{arr[i][j]} ", end="")
        print()

if __name__ == "__main__":
    main()

