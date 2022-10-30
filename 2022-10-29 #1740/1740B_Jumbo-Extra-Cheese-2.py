# Solved on 2022-10-29 at 14:36 GMT +3
# https://codeforces.com/contest/1740/problem/B

t = int(input())

while t > 0:
    t-=1

    n = int(input()) # number of slices
    x = n
    slicesH = []
    slicesW = []
    totala = 0
    totalb = 0
    currw = 0
    currh = 0
    existingh = []
    slicesH2 = []
    slicesW2 = []
    existingh2 = []

    while x>0:
        x-=1
        a,b = map(int, input().split())
        h = 0
        w = 0

        h = max(a,b)
        w = min(a,b)
    
        slicesH.append(h)
        slicesW.append(w)


   
   
    d = {i:ix for ix, i in enumerate(slicesH)}
    slicesH = sorted(slicesH)
    slicesW = sorted(slicesW, key=lambda x: d.get(x, float('inf')))

    slicesH.reverse()
    slicesW.reverse()

    #print(slicesH)
    #print(slicesW)
    prevh = 0
    top = 0
    bottom = 0
    sides = 0
    
    
   
    for x in range(len(slicesH)):
        top += slicesW[x]*2
        hdiff = abs(slicesH[x]-prevh)
        sides+=hdiff
        prevh = slicesH[x]

    sides+= prevh
    
    print(top+bottom+sides)
