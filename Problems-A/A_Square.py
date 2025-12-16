for _ in range(int(input())):
    x1, y1 = map(int, input().split())
    x2, y2 = map(int, input().split())
    x3, y3 = map(int, input().split())
    x4, y4 = map(int, input().split())

    if x1 == x2:
        print((abs(y1-y2)**2))
    elif x2 == x3:
        print((abs(y2-y3)**2))
    elif x3 == x4:
        print((abs(y3-y4)**2))
    elif x1 == x3:
        print((abs(y1-y3)**2))
    elif x1 == x4:
        print((abs(y1-y4)**2))
    else:
        print((abs(y2-y4)**2))