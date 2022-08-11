# Solved on 2022-08-11 at 21:51 GMT +3
# https://codeforces.com/contest/58/problem/A

s = input()

final = ""

fit = ["h", "e", "l", "l", "o"]

last = 0

for x in s:
    if x == fit[last]:
        last += 1
        final += x
        if final == "hello":
            print("YES")
            exit()

print("NO")
