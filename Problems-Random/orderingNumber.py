def ctdv(num):
    c = 0
    for i in range(1,int(num**0.5)+1):
            if num%i == 0:
                c += 2 if i != num // i else 1
    return c 
    
def srt_by_dv(x):
    return (ctdv(x), -x)

def srt_k(l,k):
    sort_l = sorted(l, key=srt_by_dv)
    return (sort_l[k - 1])

t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    k = int(input())

    ans = srt_k(l,k)

    print(ans)
