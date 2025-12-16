b, r = map(int, input().split())
c = 0
while 1:
    c += 1
    b -= 1
    r -= 1
    if b==0 or r == 0:
        break
if b==0:
    print(f'{c} {(r//2)}')
else:
    print(f'{c} {(b//2)}')