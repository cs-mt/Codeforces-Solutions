# Solved on 2022-08-11 at 22:01 GMT +3
# https://codeforces.com/contest/58/problem/B

n = int(input())

last = n
divisor = 2

out = str(last) +  " "

while last > 1:
    if(last % divisor == 0):
        last = last // divisor
        divisor = 2
        out += str(last) + " "
    else:
        divisor += 1

print(out)
