import math
 
def solve():
    n, m, k = map(int, input().split())
    a = [[int(x) for x in input().split()] for j in range(n)]
    s = [input() for i in range(n)]
    pref = [[0 for i in range(m + 1)] for j in range(n + 1)]
    diff = 0
    for i in range(n):
        cur = 0
        for j in range(m):
            if s[i][j] == '1':
                cur += 1
                diff += a[i][j]
            else:
                diff -= a[i][j]
            pref[i + 1][j + 1] = pref[i][j + 1] + cur
    if diff == 0:
        print("YES")
        return
    g = 0
    for i in range(n - k + 1):
        for j in range(m - k + 1):
            f = pref[i + k][j + k] - pref[i + k][j] - pref[i][j + k] + pref[i][j]
            f = abs(k * k - 2 * f)
            print(f,end=' ')
            g = math.gcd(g, f)

    print()
    if g == 0 or diff % g != 0:
        print("NO")
    else:
        print("YES")
 
 
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()