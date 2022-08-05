# Solved on 2022-08-04 at 18:41 GMT +3
# https://codeforces.com/contest/1716/problem/A

test_cases = int(input())

while test_cases > 0:
    test_cases -= 1
    
    case = int(input())

    if case % 3 == 0:
        print(int(case//3))
        continue
    elif case % 3 == 1:
        step3 = int(case//3)+2
        if case % 2 == 0 and case // 2 < step3:
            print(case//2)
        else:
            if case == 1:
                print(2)
                continue 

            if (case - ((case//3-1) * 3)) % 2 == 0 and ((case - ((case//3-1) * 3))) // 2 + (case//3-1) < step3 and ((case - ((case//3-1) * 3))) + ((case//3-1) * 3) == case:
                print(((case - ((case//3-1) * 3)) // 2) + (case//3-1))
            else:
                print(step3)
        continue
    elif case % 3 == 2:
        print(int(case//3)+1)
        continue
