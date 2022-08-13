# Solved on 2022-08-13 at 19:37 GMT +3
# https://codeforces.com/contest/1712/problem/B

tests = int(input())
 
while tests > 0:
    tests -= 1
 
    n = int(input())
   
    z = 1

    if n % 2 == 1:
        out1 = "1 "

        evenn = 2
        oddn = 3

        odd = True

        while z < n:
            if odd:
                out1 += str(oddn) + " "
                oddn += 2
                odd = False
            else:
                out1 += str(evenn) + " "
                evenn += 2
                odd = True

            z+=1
    else:
        out1 = "2 1 "

        oddn = 3
        evenn = 4
        
        odd = False

        while z < n-1:
            if odd:
                out1 += str(oddn) + " "
                oddn += 2
                odd = False
            else:
                out1 += str(evenn) + " "
                evenn += 2
                odd = True

            z+=1

    print(out1)
