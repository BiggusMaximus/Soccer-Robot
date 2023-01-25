import cv2
import numpy as np

def detectBall(img):
    height, width = img.shape[:2]
    img_gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    img_blur = cv2.GaussianBlur(img_gray, (17, 17), 0)
    circles = cv2.HoughCircles(
        img_blur, 
        cv2.HOUGH_GRADIENT, 
        1.2, 
        100, # minimum distance
        param1=100, # 
        param2=30, # sensitivity
        minRadius=75, # 
        maxRadius=400
        )
    if circles is not None:
        circles = np.uint16(np.around(circles))
        for i in circles[0, :]:
            cv2.circle(img, (i[0], i[1]), i[2], (0,255,0), 2)

            
       
        # print(f"height: {height}, width: {width}, xp: {i[0]}")
    return img

