n = int(input())
l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))
l3 = l1[1:] + l2[1:]
s = set(l3)
if len(s)!=n:
    print("Oh, my keyboard!")   
else:
    print("I become the guy.")
'''can = 1
for i in range(1,n+1):
    if i not in l3:
        can = 0
        break

if can == 0:
    print("Oh, my keyboard!")   
else:
    print("I become the guy.")'''
#print(l3)
#print(s)
