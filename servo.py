from gpiozero import Servo
from time import sleep

servo = Servo(17)

while True:
    #servo.value=0.5
    servo.min()
    sleep(1)
    servo.mid()
    sleep(1)
    servo.max()
    sleep(1)
    #servo.value=0
    #sleep(1)
