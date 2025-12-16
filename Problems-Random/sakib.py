for i in range(int(input())):
    n=int(input())
    count =0
    coin=0
    p=input()
    for j in range(1,n):
        if p[j]== ".":
            coin=coin
        elif p[j]== "@":
            coin += 1
        elif p[j] == "*":
            if j==(n-1):
                break
            if p[j+1]=="*":
                break
            else:
                continue

    print(coin)


