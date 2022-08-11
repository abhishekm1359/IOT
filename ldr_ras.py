import RPi.GPIO as GPIO
from time import sleep
GPIO.setmode(GPIO.BCM)
GPIO.setup(4,GPIO.IN)
while(True):
 out = GPIO.input(4)
 if(out==0):
  print ("LDR is Detecting Light")
 else:
  print ("LDR is not Detecting Light")
  GPIO.setup(17,GPIO.OUT)
 sleep(1)

