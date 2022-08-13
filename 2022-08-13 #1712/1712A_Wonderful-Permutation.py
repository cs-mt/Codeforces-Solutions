# Solved on 2022-08-13 at 17:49 GMT +3
# https://codeforces.com/contest/1712/problem/A

tests = int(input())

while tests > 0:
    tests -= 1
    
    n, k = list(map(int, input().split(" ")))
    p = list(map(int, input().split(" ")))
    
    ops = 0

    new = p[:k]    
    rest = p[k:]

    while True:
        new.sort()
        rest.sort()

        if len(rest) > 0 and new[-1] > rest[0]:
            ops += 1
            new[-1] = rest[0]
            del rest[0]
        else:
            print(ops)
            break 
