for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))

    lt_min = [float('inf')] * n
    rt_max = [float('-inf')] * n

    lt_min[0] = l[0]
    rt_max[n - 1] = l[n - 1]

    for i in range(1, n):
        lt_min[i] = min(lt_min[i - 1], l[i])

    for i in range(n - 2, -1, -1):
        rt_max[i] = max(rt_max[i + 1], l[i])

    pen = 0

    for i in range(n):
        if lt_min[i] < l[i] and l[i] < rt_max[i]:
            pen += 1

    print(pen)
