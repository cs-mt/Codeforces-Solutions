# Solved on 2022-10-31 at 19:03 GMT +3
# https://codeforces.com/contest/1746/problem/A

t = int(input())

while t > 0:
    t-=1

    k,n = map(int, input().split())

    arr = list(map(int, input().split()))

    if 1 in arr:
        print("YES")
    else:
        print("NO")
