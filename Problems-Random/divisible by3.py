t=int(input())
p=[]
u=0
for i in range(t):
    n=int(input())
    lst=list(map(int,input().split()))
    for z in range(n):
        p.append((lst[z]) % 3)
    if n==len(lst):
        if sum(lst) % 3 == 0 or sum(lst) == 0:
            u += len(lst)
            print(u)
            u=0
        elif sum(lst)%3==1:
            if 1 in p:
                u += len(lst)-1
                print(u)
                u=0
            else:
                u +=len(lst)-2
                print(u)
                u=0
        elif sum(lst)%3==2:
            if 2 in p :
                u +=len(lst)-1
                print(u)
                u=0
            else:
                u +=len(lst)-2
                print(u)
                u=0
    p=[]