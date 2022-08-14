# Solved on 2022-08-15 at 02:11 GMT +3
# https://codeforces.com/contest/158/problem/B

n = int(input())

groups = list(map(int, input().split(" ")))

groups.sort(reverse = True)

taxis = 0

one = 0
two = 0
three = 0
four = 0

for x in groups:
    if x == 1:
        one += 1
    elif x == 2:
        two += 1
    elif x == 3:
        three += 1
    elif x == 4:
        four += 1

taxis += four
four = 0

a = min(three, one)
taxis += a
three = three - a
one = one - a

a = two // 2
taxis += a
two = two - a * 2

a = min(one//2, two)
taxis += a
two = two - a
one = one - a*2

a = min(one, two)
taxis += a
one = one - a
two = two - a

taxis += two
taxis += three
taxis += one//4 + ( one % 4 > 0 )

print(taxis)
