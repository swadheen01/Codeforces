for _ in range(int(input())):
    n = int(input())
    s = input()
    n1 = s.count('1')
    n0 = s.count('0')
    c0 = 0
    c1 = 0
    for i in range(n1):
        if s[i]=='1':
            continue
        else:
            c1 += 1
    for i in range(n0):
        if s[i] == '0':
            continue
        else:
            c0 += 1
    print(min(c0, c1))