for _ in range(int(input())):
    s = input()
    n = input()
    m = len(n)
    flag = 1 
    for i in range(m):
        if n[i] in s:
            s = s[s.index(n[i])+1:]
            continue
        else:
            flag = 0
                
    if flag == 0:
        print("NO")
    else:
        print("YES")
        