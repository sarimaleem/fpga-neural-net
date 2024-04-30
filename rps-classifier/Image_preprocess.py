from PIL import Image
import io as IO
import numpy as np
import cv2
import os
import sys

WIDTH = 30
LENGTH = 20

LOWER_GREEN_ONE = 36
LOWER_GREEN_TWO = 25
LOWER_GREEN_THREE = 25
lower_green = (LOWER_GREEN_ONE, LOWER_GREEN_TWO, LOWER_GREEN_THREE)

UPPER_GREEN_ONE = 86
UPPER_GREEN_TWO = 255
UPPER_GREEN_THREE = 255
upper_green = (UPPER_GREEN_ONE, UPPER_GREEN_TWO, UPPER_GREEN_THREE)

# Rock (0): ['foxUXc8WPRDAd6LM.png', 'IY007WkIgMgYMJRj.png', 'u3nAxX6ZNsAKQ7WC.png']
# Paper (1): ['W79peyAyfQqNP1vF.png', '7ZGsbIMypDIEZxR0.png', 'DsaaqkHZUN3pmcwH.png']
# Scissors (2): ['6TMYdUMhaEWHQOcc.png', 'Y803FUXqbDOwGm0K.png', 'uJ286TPihhYw3Y3S.png']

def main():
    if len(sys.argv) == 2:
        img = cv2.imread(f"data/{sys.argv[1]}")
        ans = sys.argv[1][1:sys.argv[1].index('/', 2)]
        print(f"justin hello {ans}")
    else: img = cv2.imread("data/paper/W79peyAyfQqNP1vF.png")
    image = cv2.resize(img, (WIDTH, LENGTH))
    # for debugging
    hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
    mask = cv2.inRange(hsv, lower_green, upper_green)
    hand_mask = np.array(cv2.bitwise_not(mask))
    # cv2.imshow("", hand_mask)
    # cv2.waitKey(0)
   
    # img_array = np.array(image)

    # print(img_array.shape)

    arr = []
    for i in range(LENGTH):
        arr.append([0] * WIDTH)

    with open("data_init.sv", "w") as output:
        output.write('`include "common.svh"\n\n')
        output.write("module data_init (input logic clk);\n\n")
        output.write(f"    logic [LENGTH-1:0][WIDTH-1:0] image;\n")
        output.write(f"    logic init_in;\n")

        output.write("    classifier classifier (clk, init_in, image);\n\n")

        output.write("    initial begin\n")
        for i in range(LENGTH):
            for j in range(WIDTH):
                if hsv[i][j][0] >= LOWER_GREEN_ONE and hsv[i][j][0] <= UPPER_GREEN_ONE and \
                        hsv[i][j][1] >= LOWER_GREEN_TWO and hsv[i][j][1] <= UPPER_GREEN_TWO and \
                        hsv[i][j][2] >= LOWER_GREEN_THREE and hsv[i][j][2] <= UPPER_GREEN_THREE:
                    output.write(f"        image[{i}][{j}] = 1'b0;\n")
                    arr[i][j] = 0 # TODO: CONVERT TO IMG TMRW
                else: 
                    output.write(f"        image[{i}][{j}] = 1'b1;\n")
                    arr[i][j] = 1
        output.write("\n        init_in = 1'b1;\n")
        output.write("    end\n")
        output.write("endmodule\n")

    for i in range(LENGTH):
        for j in range(WIDTH):
            print(f"{1 if hand_mask[i][j] > 0 else 0} ", end="")
        print()

    print()
    for i in range(LENGTH):
        for j in range(WIDTH):
            print(f"{arr[i][j]} ", end="")
        print()

if __name__ == "__main__":
    main()
