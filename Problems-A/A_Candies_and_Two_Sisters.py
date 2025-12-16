import math
for _ in range(int(input())):
    n = int(input())
    w = math.ceil(n/2)
    if n<3:
        print(0)
    else:
        print(w-1)