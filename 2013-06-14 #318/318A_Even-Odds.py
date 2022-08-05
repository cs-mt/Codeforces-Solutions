# Solved on 2022-08-05 at 16:22 GMT +3
# https://codeforces.com/contest/318/problem/A

inputs = input().split(" ")

n = int(inputs[0])
k = int(inputs[1])

evens = n // 2
odds = n - evens

if k > odds:
    a = n - k
    if n % 2 == 0:
        print(k-(a+1)+1)
    else:
        print(k-(a+1))
else:
    print(k+(k-1))
