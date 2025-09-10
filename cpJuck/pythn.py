for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    if max(a) == 0:
        print("No")
    else:
        print("Yes")
        prefix_sum = 0
        pos = []
        neg = []
        for x in a:
            if x >= 0:
                pos.append(x)
            else:
                neg.append(x)
        ans = []
        for _ in range(n):
            if prefix_sum <= 0:
                ans.append(pos[-1])
                pos.pop()
            else:
                ans.append(neg[-1])
                neg.pop()
            prefix_sum += ans[-1]
        print(' '.join(list(map(str, ans))))