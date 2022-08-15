# Solved on 2022-08-15 at 06:24 GMT +3
# https://codeforces.com/contest/706/problem/B

import bisect

n = int(input())
     
prices = list(map(int, input().split(" ")))

prices2 = sorted(prices)

days = int(input())

counts = {}

for x in prices2:
    if x in counts:
        counts[x] += 1
    else:
        counts[x] = 1

while days > 0:
    days -= 1
    money = int(input())

    location = bisect.bisect_left(prices2, money)

    if money in counts:
      location += counts[money]

    print(location)
