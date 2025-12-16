#y=0x+c
s = input()
n = len(s)
indx = 2
digit = 0
m = 0
c = 0
neg_m = False
neg_c = False

if s[2] == '-':
    neg_m = True
    indx += 1
if s[indx] == 'x':
    m = 1
    
else:
    #while s[indx] != 'x':
    digit = int(s[indx:s.index('x')])
    m *= 10
    m += digit
    #indx += 1
    indx = s.index('x')

if (neg_m):
    m *= (-1)

indx += 1

if indx<n:
    if s[indx]== '-':
        neg_c = True
        indx += 1
    else:
        indx += 1
#while indx < n:
if indx<n:
    digit = int(s[indx:n])
    c *= 10
    c += digit

if neg_c:
    c *= (-1)

#print(m)
#print(c)
#print(n)
for _ in range(int(input())):
    x, y = map(int, input().split())
    if y == (m * x + c):
        print("YES")
    else:
        print("NO")
