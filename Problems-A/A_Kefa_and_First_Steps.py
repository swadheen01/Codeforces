n = int(input())
l = list(map(int,input().split()))
c = 1
ans = 1
if n ==1:
    print(1)
else:
 
    for i in range(n-1):
        if l[i] <= l[i+1]:
            c += 1
            if c>ans:
                ans = c
        else:
            c = 1
            continue
    print(ans)