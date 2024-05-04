import io as IO
import numpy as np
import cv2
import os
import sys

WIDTH = 15
LENGTH = 10

def main():
    if len(sys.argv) == 2:
        img = cv2.imread(f"data/{sys.argv[1]}")
        ans = sys.argv[1][1:sys.argv[1].index('/', 2)]
        print(f"dhruv hello {ans}")
    else: img = cv2.imread("data/paper/W79peyAyfQqNP1vF.png")

    image = cv2.resize(img, (WIDTH, LENGTH))
    hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

    with open("hsv_image.txt", "w") as output:
        for i in range(LENGTH):
            for j in range(WIDTH):
                for k in range(3):
                    if i < LENGTH - 1 or j < WIDTH - 1 or k < 2:
                        output.write(f"{hsv[i][j][k]} ")
                    else:
                        output.write(f"{hsv[i][j][k]}")

if __name__ == "__main__":
    main()
