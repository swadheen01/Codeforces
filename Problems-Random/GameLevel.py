t = int(input())
for i in range(1,t+1):
    a , u = map(int, input().split())
    if u == 0:
        print(f"Game #{i}: 0 / 1")
    
    else:
        for j in range(u,0,-1):
            if u%j == 0 and a%j == 0:
                x = u//j
                y = a//j
                print(f"Game #{i}: {x} / {y}")
                break


        