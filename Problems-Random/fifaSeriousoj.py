t = int(input())
for _ in range(t):
    a,b,c,d = map(int,input().split())
    count = 0

    while a != 0 and b !=0 and c != 0 and d != 0:
        count += 1
        a-= 1
        b-= 1
        c-= 1
        d-= 1

    if c == 0 and d>=2 and a>0 and b>0:
        while 1:
            count += 1 
            d -= 2
            a -= 1
            b -= 1
    



    #print(count)
        