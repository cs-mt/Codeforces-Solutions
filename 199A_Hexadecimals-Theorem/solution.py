# Sat 25 Mar 2023 09:32:32 PM UTC
# https://codeforces.com/contest/199/problem/A

n = int(input())

a=0
b=1

fibs = [a,b]

while(b<n):
    newfib = a+b;
    a = b
    b = newfib
    fibs.append(b)

if(n <= 2):
  if(n == 0):
      print("0 0 0 ")
  elif(n == 1):
      print("0 0 1")
  elif(n == 2):
      print(" 0 1 1")
else:
    test = fibs[-1-1] + fibs[-1-3] + fibs[-1-4]

    if n==test:
      print("{} {} {}".format(fibs[-1-1], fibs[-1-3], fibs[-1-4]))
    else:
      print("I'm too stupid to solve this problem")



