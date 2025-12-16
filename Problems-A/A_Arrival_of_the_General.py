n = int(input())
sl = list(map(int, input().split()))
larg = max(sl)
low = min(sl)

indlarg = sl.index(larg)
def indlows():
    sl.reverse()
    indlow = sl.index(low)
    return indlow

indlow = indlows()

if (indlarg + indlow)<len(sl):
    print(indlarg + indlow)
else:
    print(indlarg + indlow -1)

