n , k = map(int, input().split())
rt = 240 - k
c = 0
t = 0
for i in range(1,n+1):
    t += 5*i
    if t<= rt:
        c += 1
    else:
        break
print(c)