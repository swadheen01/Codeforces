#simple calculator using in python
a=int(input())
b=int(input())
def add(a,b):
    return a+b   
def subtract(a,b):
    return a-b
def multiply(a,b):
    return a*b
def divide(a,b):
    return a/b
while True:
    if option==1:
        print(a+b)
    elif option==2:
        print(a-b)
    elif option==3:
        print(a*b)
    elif option==4:
        print(a/b)
    elif option==5:
        print(a%b)
