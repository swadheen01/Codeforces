n = int(input())

list = list(map(int, input().split()))
c = 0
if len(list)==1:
    print(0)

else:
    if list[0]>list[1]:
        largest = list[0]
        lowest = list[1]

    else:
        lowest = list[0]
        largest = list[1]

    for i in list:
        if i>largest:
            c+=1
            largest = i
        elif i<lowest:
            c+=1
            lowest=i

    if list[0]==list[1]:
        print(c)
    else:
        print(c+1)