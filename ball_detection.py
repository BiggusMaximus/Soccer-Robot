import cv2

img = cv2.imread('./img/1.jpg')

def detectBall(img):
    img = cv2.GaussianBlur(img, (17, 17), 0)
    img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    img = cv2.HoughCircles(img, cv2.HOUGH_GRADIENT, 1.2, 100)
    
    return img

img = detectBall(img)
cv2.imshow("result" ,img)
cv2.waitKey(0)
cv2.destroyAllWindows()