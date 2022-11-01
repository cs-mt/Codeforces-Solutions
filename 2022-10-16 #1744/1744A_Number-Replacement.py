# Solved on 2022-11-01 at 19:13 GMT +3
# https://codeforces.com/contest/1744/problem/A

t = int(input())
 
while t > 0:
    t-=1
    l = int(input())
    arr = list(map(int, input().split()))
    s = list(input())
 
    check = {}
 
    if len(s) != len(arr):
        print("NO")
        continue
    
    cont = 0
 
    for x in range(len(s)):
        if arr[x] in check and check[arr[x]] != s[x]:
            print("NO")
            cont = 1
            break
 
        check[arr[x]] = s[x]
    
    if cont == 1:
        continue
    
    print("YES")
