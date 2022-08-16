# Solved on 2022-08-16 at 18:06 GMT +3
# https://codeforces.com/contest/1719/problem/B

tests = int(input())

while tests > 0:
    tests -= 1

    n, k = list(map(int, input().split(" ")))

    pairs = []

    for x in range(0, n, +2):
        if ((x+1+k) * (x+2)) % 4 == 0:
            pairs.append([x+1, x+2])
        elif ((x+2+k) * (x+1)) % 4 == 0:
            pairs.append([x+2, x+1])
        else:
            print("NO")
            pairs = []
            break
        
    if len(pairs) > 0:
        print("YES")
        for x in pairs:
            print("{} {}".format(x[0], x[1]))
        
