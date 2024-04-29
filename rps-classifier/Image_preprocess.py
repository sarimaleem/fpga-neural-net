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


if __name__ == "__main__":
    main()
