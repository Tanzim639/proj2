import time
tm = time.strftime("%H : %M : %S")
print("The time is now: ",tm)
hour = int(time.strftime("%H"))
if(hour>=6 and hour<=11):
    print("Good Morning")
elif(hour>=12 and hour<=3):
    print("Good Noon")
elif(hour>=4 and hour<=5):
    print("Good Afternoon")
else:
    print("Good Night")
