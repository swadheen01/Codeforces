s1 = input()
s2 = input()
s3 = input()
s4 = s1 + s2
l = []
for i in s3:
    l.append(i)
if len(s3) != (len(s1)+len(s2)):
    print("NO")
else:
    flag = 1
    for i in s4:
        if i in l:
            l.remove(i)
        else:
            flag = 0
    
    if flag == 0:
        print("NO")
    else:
        print("YES")