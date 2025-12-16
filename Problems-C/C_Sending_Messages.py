t=int(input())
for _ in range(t):
    n,f,a,b=map(int,input().split())
    m=list(map(int,input().split()))
    a1=0
    for i in range(n):
        if m[i]-a1<b:
            f -= (m[i]-a1)
            a1 = m[i]
        else:
            f -= b

        
    if f>0:
        print("YES")
    else:
        print("NO")