import math

for _ in range(int(input())):
    x, y = map(int, input().split())
    a = min(x,y)
    
    flag = 0
    for i in range(2, int(math.sqrt(a) + 1)):
        if x % i == 0 and y % i == 0:
            print(i)
            flag = 1
            continue
    if flag:
        continue
    if max(x,y)%a == 0 and a != 1:
        print(a)
        continue
    print(-1)
    
