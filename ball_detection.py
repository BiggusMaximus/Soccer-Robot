import cv2
import numpy as np
import serialCommunication

dist = lambda x1,y1,x2,y2: (x1-x2)**2 + (y1-y2)**2
prevCircle = None

def detectBall(img):
    height, width = img.shape[:2]
    img_gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    img_blur = cv2.GaussianBlur(img_gray, (17, 17), 0)
    chosen = None

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
            if chosen is None:
                chosen = i
            if prevCircle is not None:
                if dist(chosen[0], chosen[1], prevCircle[0], prevCircle[1]) <= dist(i[0], i[1], , prevCircle[0], prevCircle[1]):
                    chosen = i
        cv2.circle(img, (chosen[0], chosen[1]), i, (0,255,0), 2)
        #.send_data(f"ball_found,{i[0]}\n")
        prevCircle = chosen
    

        # print(f"height: {height}, width: {width}, xp: {i[0]}")
    return img

