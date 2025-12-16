l = list(map(int,input().split()))
l.sort()
print((max(l)-l[1])+(l[1]-min(l)))