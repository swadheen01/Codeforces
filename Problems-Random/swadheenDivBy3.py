for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    li = []
    l = len(arr)
    count = 0
    for i in arr:
        li.append(i%3)
    if sum(arr)%3 == 0:
        count += l
    elif sum(arr)%3 == 1:
        if 1 in li:
            count += (l-1)
        else:
            count += (l-2)
    elif sum(arr)%3==2:
        if  2 in li:
            count += (l-1)
        else:
            count += (l-2)
    print(count)