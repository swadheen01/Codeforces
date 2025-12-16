def min_days(n, s, f):
    c_10 = c_01 = c_11 = 0

    for i in range(n):
        if s[i] == '1' and f[i] == '0':
            c_01 += 1
        elif s[i] == '0' and f[i] == '1':
            c_10 += 1
        elif s[i] == '1' and f[i] == '1':
            c_11 += 0

    max_c = max(c_10, c_01)
    return max_c + c_11

t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    f = input()

    result = min_days(n, s, f)
    print(result)
