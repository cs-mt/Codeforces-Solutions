# Solved on 2022-08-16 at 17:47 GMT +3
# https://codeforces.com/contest/1719/problem/A

tests = int(input())

while tests > 0:
    tests -= 1

    m, n = list(map(int, input().split(" ")))

    burenka = True

    if n % 2 == 1:
        burenka = False

    if m % 2 == 1 and burenka:
        print("Burenka")
    elif m % 2 == 0 and burenka:
        print("Tonya")
    elif m % 2 == 1 and not burenka:
        print("Tonya")
    elif m % 2 == 0 and not burenka:
        print("Burenka")
