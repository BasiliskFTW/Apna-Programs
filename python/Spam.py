import pyautogui as pg
import time
import webbrowser as wb
wb.open("web.whatsapp.com")
time.sleep(1)
for i in range(100):
    pg.write("Happy Birthday Fatima\n")
    pg.press("Enter")
