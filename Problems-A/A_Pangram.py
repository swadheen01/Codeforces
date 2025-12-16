n = int(input())
s = input().lower()
l = []
flag = 1
for x in range(n):
    l.append(ord(s[x]))
if n<26:
    print("NO")

else:
    for i in range(97,123):
        if i in l:
            continue
        else:
            flag = 0
            break
    if flag == 0:
        print("NO")
    else:
        print("YES")