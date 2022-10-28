# Solved on 2022-10-28 at 17:54 GMT +3 
# https://codeforces.com/contest/1749/problem/A

t = int(input())

while t > 0:
    t -= 1
    n, m = map(int, input().split()) # n*n chessboard m rooks
    count = m
    while m>0:
        input()
        m-=1
    
    if n-count == 0 and n-count == 0:
        print("NO")
    else:
        print("YES")
    
