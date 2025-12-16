n = int(input())
l = list(map(int, input().split()))
c = 0
p = 0
i = 0
while i <= (n-1):
    if l[i] == -1:
        if p !=0:
            p -=1 
        else:
            c += 1

    else:
        p += l[i]
        
    i += 1

print(c)
