from PIL import Image
import io as IO
import numpy as np
import cv2

LENGTH = 20
WIDTH = 30

LOWER_GREEN_ONE = 36
LOWER_GREEN_TWO = 25
LOWER_GREEN_THREE = 25

UPPER_GREEN_ONE = 86
UPPER_GREEN_TWO = 255
UPPER_GREEN_THREE = 255

def main():
    with Image.open("data/0bioBZYFCXqJIulm.png") as img:
        # img = img.resize((WIDTH, LENGTH))
        img = img.convert('HSV').resize((WIDTH, LENGTH))
        img_array = np.array(img)

        hand_mask = cv2.inRange(img, lower_green, )

        # for i in range(LENGTH):
        #     for j in range(WIDTH):
        #         if img_array[i][j][0] >= LOWER_GREEN_ONE and img_array[i][j][0] <= UPPER_GREEN_ONE and \
        #                 img_array[i][j][1] >= LOWER_GREEN_TWO and img_array[i][j][1] <= UPPER_GREEN_TWO and \
        #                 img_array[i][j][2] >= LOWER_GREEN_THREE and img_array[i][j][2] <= UPPER_GREEN_THREE:
        #             print("0", end="")
        #         else: print("1", end="")
        #     print()

        # with open("dummy/data_init_dummy.sv", "w") as output:
        #     output.write("module data_init (inout logic [7:0] image [{LENGTH-1}:0][{WIDTH-1}:0]);\n\n")
        #     output.write(f"logic [7:0] image [{LENGTH-1}:0][{WIDTH-1}:0];\n\n")
        #     output.write("initial begin\n")
        #     for i in range(LENGTH):
        #         for j in range(WIDTH):
        #             for k in range(3):
        #                 element = img_array[i][j][k]
        #                 output.write(f"    image[{i}][{j}][{k}] = 8'd{element};\n")
        #     output.write("end\n")
        #     output.write("endmodule\n")

if __name__ == "__main__":
    main()