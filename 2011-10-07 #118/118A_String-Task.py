# Solved on 2022-08-07 at 21:26 GMT +3
# https://codeforces.com/problemset/problem/118/A

str = input().lower()

vowels = ["a", "o", "y", "e", "u", "i"]

new = ""

for x in range(len(str)):
    if str[x] not in vowels:
        new += "." + str[x]


print(new)
