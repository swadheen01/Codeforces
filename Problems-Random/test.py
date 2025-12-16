for _ in range(int(input())):
    s = input()
    d = 0
    u = 0
    l = 0
    sp = 0
    sl = ['!','@','#','$','%','^','&','*','(',')']
    dig = ['0','1','2','3','4','5','6','7','8','9']
    n = len(s)
    if len(s)<8:
        print("invalid")
    else:
        for i in s:
            if i in dig:
                d += 1
                break
        for i in s:
            if i in sl:
                sp += 1
                break
        for i in range(n):
            if 97 <= ord(s[i]) <= 122 :
                l += 1
                break
        for i in range(n):
            if 65 <= ord(s[i]) <= 90 :
                u += 1
                break
        if d != 0 and u != 0 and l != 0 and sp != 0 :
            print("valid")
        else:
            print("invalid")