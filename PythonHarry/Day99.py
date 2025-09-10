import time
from plyer import notification
time_second = 3
while True:
    time.sleep(time_second)
    notification.notify(title="Water" , message="Drink water now" , timeout = 2)