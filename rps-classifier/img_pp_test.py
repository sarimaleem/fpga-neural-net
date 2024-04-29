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

lower_green = np.array([36, 25, 25])
upper_green = np.array([86, 255, 255])

def main():
    # assert opencv version is same as Img version at each step!
    cv2_img = cv2.imread("data/0bioBZYFCXqJIulm.png")
    cv2_img = cv2.resize(cv2_img, (WIDTH, LENGTH))

    with Image.open("data/0bioBZYFCXqJIulm.png") as img:
        img = img.convert('HSV').resize((WIDTH, LENGTH))

    assert(np.array_equal(np.array(cv2_img), np.array(img)))

    hm = cv2.bitwise_not(cv2.inRange(cv2.cvtColor(cv2_img, cv2.COLOR_BGR2HSV), lower_green, upper_green))
    cv2.imshow("justin", hm)
    cv2.waitKey(0)  # Wait for any key press
    cv2.destroyAllWindows()  # Close all OpenCV windows

    # with Image.open("data/0bioBZYFCXqJIulm.png") as img:
    #     img = img.convert('HSV').resize((WIDTH, LENGTH))
    #     img_array = np.array(img)