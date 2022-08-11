import RPi.GPIO as GPIO
import time
import Adafruit_DHT
from time import sleep
from gpiozero import LED, Button, DistanceSensor

led = LED(24)
button = Button(23)

button.when_pressed=led.on
