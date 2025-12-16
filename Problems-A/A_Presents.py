n = int(input())
l1 = list(map(int, input().split()))
#l2 = [0]*n
for i in range(1, n+1):
    print(l1.index(i)+1 , end = " ")