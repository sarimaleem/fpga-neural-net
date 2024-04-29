from PIL import Image
import io as IO
import numpy as np
import cv2

LENGTH = 20
WIDTH = 30

LOWER_GREEN_ONE = 18
LOWER_GREEN_TWO = 25
LOWER_GREEN_THREE = 25

UPPER_GREEN_ONE = 43
UPPER_GREEN_TWO = 255
UPPER_GREEN_THREE = 255

lower_green = np.array([36, 25, 25])
upper_green = np.array([86, 255, 255])

def main():
    with Image.open("data/0bioBZYFCXqJIulm.png") as img:
        img = img.convert('HSV').resize((WIDTH, LENGTH))
        img_array = np.array(img)

        with open("dummy/data_init_dummy.sv", "w") as output:
            output.write("module data_init (input logic clk);\n\n")
            output.write(f"logic [{LENGTH-1}][{WIDTH-1}] image;\n\n")

            output.write("initial begin")
            for i in range(LENGTH):
                for j in range(WIDTH):
                    if img_array[i][j][0] >= LOWER_GREEN_ONE and img_array[i][j][0] <= UPPER_GREEN_ONE and \
                            img_array[i][j][1] >= LOWER_GREEN_TWO and img_array[i][j][1] <= UPPER_GREEN_TWO and \
                            img_array[i][j][2] >= LOWER_GREEN_THREE and img_array[i][j][2] <= UPPER_GREEN_THREE:
                        output.write(f"    image[{i}][{j}] = 1'b1;\n")
                    else: 
                        output.write(f"    image[{i}][{j}] = 1'b0;\n")
            output.write("end")
            output.write("endmodule")

if __name__ == "__main__":
    main()