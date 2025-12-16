n = int(input())
hl = []
gl = []
for _ in range(n):
    h, g = map(int, input().split())
    hl.append(h)
    gl.append(g)
c = 0
for i in range(n):

    c += gl.count(hl[i])
print(c)       
#print(hl)
#print(gl)