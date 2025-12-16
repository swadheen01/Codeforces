k,r = map(int, input().split())
i = 0
while 1:
    i += 1
    if (k*i)%10 == 0:
        print(i)
        break
    else:
        if (k * i - r)%10 ==0:
         
            print(i)
            break
      
    
