from PIL import Image
import io as IO
import numpy as np
import cv2

LENGTH = 20
WIDTH = 30

LOWER_HUE = 36 / 2
UPPER_HUE = 86 / 2


LOWER_SATURATION = 25
UPPER_SATURATION = 255

LOWER_VALUE = 25
LOWER_VALUE = 255

def main():
    with Image.open("../rps-classifier/data/0bioBZYFCXqJIulm.png") as img:
        # img = img.resize((WIDTH, LENGTH))
        img = img.convert('HSV').resize((WIDTH, LENGTH))
        img_array = np.array(img)
        byte_list = img_array.tobytes()
        print(byte_list)
        with open('output_bytes.bin', 'wb') as file:
            file.write(byte_list)

main()
