def digital_root(n):
    while n >= 10:
        sum_of_digits = 0
        while n > 0:
            sum_of_digits += n % 10
            n //= 10
        n = sum_of_digits
    return n

while True:
    num = int(input())
    if num == 0:
        break
    print(digital_root(num))
