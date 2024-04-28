from PIL import Image
import io as IO
import numpy as np

def main():
    with Image.open("green-background.jpg") as img:
        img = img.convert('HSV').resize((30, 20))

        array = np.array(img)

        print(array)
        print(f"shape: {array.shape}")

        with open("image_binary", "wb") as f:
            f.write(array.tobytes())

if __name__ == "__main__":
    main()