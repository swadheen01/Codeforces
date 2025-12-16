s = input()
sett = []
n = len(s)

for i in range(1,n-1,3):
    sett.append(s[i])
ans = set(sett)
print(len(ans))
