import cv2
from predict import *

# define a video capture object
vid = cv2.VideoCapture(0)
  
while(True):
    ret, frame = vid.read()
    xpusat, frame = detection(frame)
    cv2.imshow('frame', frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
   

vid.release()
cv2.destroyAllWindows()