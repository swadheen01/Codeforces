for i in range(1,int(input())+1):
    a , b, c, d = map(int, input().split())
    
    b = b*2
    c = c*3
    d = d*3
    print(f"Case {i}: {(a+b+c+d)//9}")