from PIL import Image
import numpy as np

LENGTH = 20
WIDTH = 30

MIN_HUE = 18
MAX_HUE = 43

MIN_SATURATION = 25

MIN_VALUE = 25

def main():
    with Image.open("../rps-classifier/data/rock/0bioBZYFCXqJIulm.png") as img:
        # Convert to HSV and resize
        img = img.convert('HSV').resize((WIDTH, LENGTH))
        img_array = np.array(img)
        
        # Apply HSV filters
        mask = (
            (img_array[:, :, 0] >= MIN_HUE) & (img_array[:, :, 0] <= MAX_HUE) &  # Hue filter
            (img_array[:, :, 1] >= MIN_SATURATION) &  # Saturation filter
            (img_array[:, :, 2] >= MIN_VALUE)  # Value filter
        )

        # Convert boolean mask to int (1 for True, 0 for False)
        mask = mask.astype(int)
        
        # Find edges
        edges = []
        for row in range(mask.shape[0]):
            for col in range(mask.shape[1] - 1):
                if mask[row, col] == 0 and mask[row, col + 1] == 1:
                    edges.append((row, col))
        
        # Print edges
        print(mask)
        for edge in edges:
            print(f"{edge[0], edge[1]}")

main()
