def func(n):
    try:
        n=int(n)
        if(n>=0 and n<=10):
            print("Yes")
            return 1
        else:
            print("No")
            return 0
    except ValueError:
        print("Invalid")
    finally:
        print("finally")

func(5)
func(20)
func("hh")
    