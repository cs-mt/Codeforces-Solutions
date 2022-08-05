players = input()

repeating_0 = 0
repeating_1 = 0

for x in players:
    if x == "0":
        repeating_0 += 1
        repeating_1 = 0

    
    if repeating_0 >= 7:
        print("YES")
        exit()

    if x == "1":
        repeating_1+= 1
        repeating_0 = 0
    
    if repeating_1 >= 7:
        print("YES")
        exit()
    
print("NO")
