import cv2
from ball_detection import *
  
# define a video capture object
vid = cv2.VideoCapture(0)
  
while(True):
    ret, frame = vid.read()
    frame = detectBall(frame)
    cv2.imshow('frame', frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
  

vid.release()
cv2.destroyAllWindows()