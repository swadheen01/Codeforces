t = int(input())
for _ in range(t):
    s = input()
    l = []
    a = len(s)
    
    for i in range(a-1,-1,-1):
        n = int(s[i])*10**(a-1-i)
        if n == 0:
            continue
        l.append(n)
    
    print(len(l))  
    print(*l)