questions = [
    [ "What is 2+2 ?", "1", "2", "3", "4", 4 ],
    [ "What is the capital of BD ?", "Raj", "Dhaka", "Sylhet", "Khulna", 2 ],
    [ "What is 1*1 ?", "1", "2", "3", "8", 1 ],
    [ "What is 2+2 ?", "1", "2", "3", "4", 4 ],
    [ "What is the capital of BD ?", "Raj", "Dhaka", "Sylhet", "Khulna", 2 ],
    [ "What is 1*1 ?", "1", "2", "3", "8", 1 ],
    [ "What is 2+2 ?", "1", "2", "3", "4", 4 ],
    [ "What is the capital of BD ?", "Raj", "Dhaka", "Sylhet", "Khulna", 2 ],
    [ "What is 1*1 ?", "1", "2", "3", "8", 1 ],
    [ "What is 2+2 ?", "1", "2", "3", "4", 4 ],
    [ "What is the capital of BD ?", "Raj", "Dhaka", "Sylhet", "Khulna", 2 ],
    [ "What is 1*1 ?", "1", "2", "3", "8", 1 ]
]

levels = [10,20,40,80,160,320,640,1280,5120,10240,20480,40960]
money = 0
checkPoints = [0,80,1280,40960]
i = int
crorpati = True
for i in range(12):
    print("\n\n")
    question = questions[i]
    print(f"Question for {levels[i]} dollers")
    print(f"Question: {question[0]} (Ans in (1-4), if you wanna quit, press q)")
    print(f"1. {question[1]}     2. {question[2]}")
    print(f"3. {question[3]}     4. {question[4]}")
    answer = (input("Enter your answer: "))
    if answer=="q":
        money=levels[i-1]
        print(f"Your takeaway home is {money}")
        crorpati=False
        break
    elif (int(answer)==question[-1]):
        print(f"Correct answer!\nYou have won {levels[i]} dollers")
    else:
        for j in reversed(checkPoints):
            if(j<=levels[i-1]):
                money=j
                break
        print(f"Wrong answer.\nYour takeway home is {money}")
        crorpati=False
        break

if(i==11 and crorpati==True):
    print("Congrats u r rich now !!!")