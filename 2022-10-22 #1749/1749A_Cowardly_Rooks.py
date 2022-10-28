# Solved on 2022-10-28 at 17:50 GMT +3 
# https://codeforces.com/contest/1749/problem/A

t = int(input())

while t > 0:
    t -= 1
    n, m = map(int, input().split()) # n*n chessboard m rooks
    locations = []
    fullX = []
    fullY = []
    while m>0:
        m-=1
        x, y = map(int, input().split())
        locations.append([x,y])
        fullX.append(x)
        fullY.append(y)
    
    possibleY = n
    possibleX = n
    
    for i in locations:
        x = i[0]
        y = i[1]

        possibleY -=1
        possibleX -=1
    
    if (possibleY == 0 and possibleX == 0):
        print("NO")
    else:
        print("YES")
