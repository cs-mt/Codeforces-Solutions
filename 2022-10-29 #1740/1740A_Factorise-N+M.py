# Solved on 2022-10-29 at 12:36 GMT +3
# https://codeforces.com/contest/1740/problem/A

t = int(input())

def Prime(n):
    if n == 2:
        return True
    if n & 1 == 0:
        return False
    d= 3
    while d * d <= n:
        if n % d == 0:
            return False
        d= d + 2
    return True



while t > 0:
    t -= 1

    first = int(input()) # first prime
    m = 2
    # n + m must not be prime
    # m must be prime
    # n is prime
    sum = first+m

    while True:
        if not Prime(sum) and Prime(m):
            print(m)
            break
        else:
            m+=1
            sum = first+m
