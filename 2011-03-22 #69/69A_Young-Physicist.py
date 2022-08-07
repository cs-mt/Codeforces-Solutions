# Solved on 2022-08-07 at 21:50 GMT +3 
# https://codeforces.com/contest/69/problem/A

vector_count = int(input())

x = 0
y = 0
z = 0

while vector_count > 0:
    vector_count -= 1
    vector = list(map(int, input().split(" ")))
    x += vector[0]
    y += vector[1]
    z += vector[2]

if(x != 0 or y != 0 or z != 0):
    print("NO")
else:
    print("YES")
