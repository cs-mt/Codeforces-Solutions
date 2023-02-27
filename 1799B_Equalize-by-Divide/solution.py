# Mon 27 Feb 2023 06:02:12 PM UTC
# https://codeforces.com/contest/1799/problem/B 

import math

t = int(input())

while(t>0):
    t-=1

    ops = []

    n = int(input())
    a = list(map(int, input().split()))

    q = 0
    while True:

      sorted_indices = [i[0] for i in sorted(enumerate(a), key=lambda x:x[1])]

      if a[sorted_indices[0]] == a[sorted_indices[-1]]:
          print(q)
          for op in ops:
             print(op)
          break

      minfound = False
      minel = 0
      mini = 0
      for index in reversed(sorted_indices):
          if a[index] > 1 and index != sorted_indices[-1]:
              minfound = True
              mini = index
              minel = a[index]

      if not minfound:
          print("-1")
          break

      maxi = sorted_indices[-1]
      maxel = a[maxi]
      q+=1
      ops.append("{} {}".format(maxi+1, mini+1))

      a[maxi] = int(math.ceil(maxel/minel))

