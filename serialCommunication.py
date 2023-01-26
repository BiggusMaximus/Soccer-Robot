import serial
import time

ser = serial.Serial('COM11', 9600, timeout=1)
ser.reset_input_buffer()


def send_data(data):
    data = data.encode('ASCII')
    ser.write(data)
    
   


