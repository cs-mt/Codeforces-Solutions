# Solved on 2022-10-27 at 12:29 GMT +3
# https://codeforces.com/contest/1754/problem/A

t = int(input())

while t>0:
    t-=1
    n = int(input())
    msgs = list(input())
    answers = 0
    questions = 0

    for x in msgs:
        if x == "A":
            answers+=1
            if questions > 0:
                questions-=1
        else:
            questions+=1

    if questions > 0:
        print("No")
    else:
        print("Yes")

   
   
