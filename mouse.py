import serial
import pyautogui
import time

ser = serial.Serial('COM5', 115200)
time.sleep(2)

sensitivity = 60

while True:
    try:
        line = ser.readline().decode().strip()
        dx, dy = map(float, line.split(","))

        # 🎯 center-based control
        move_x = dx * sensitivity
        move_y = dy * sensitivity

        pyautogui.moveRel(move_x, -move_y)

    except:
        pass