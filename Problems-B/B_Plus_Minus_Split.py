t = int(input())

for _ in range(t):
    n = int(input())
    s = input().strip()

    penalty = 0
    #min_penalty = float('inf')

    for i in range(n):
        if s[i] == '+':
            penalty += 1
        else:
            penalty -= 1

        #min_penalty = min(min_penalty, penalty)

    #print(abs(min_penalty))
    print(abs(penalty))