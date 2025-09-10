import pyttsx3
import time

speaker = pyttsx3.init()
l = ['Harry', 'larry', 'carry']
for names in l:
        speaker.say(f'Shout out to {names}')
        speaker.runAndWait() 
        time.sleep(1)