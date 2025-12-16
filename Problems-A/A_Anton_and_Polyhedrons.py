count = 0
for _ in range(int(input())):
    s = input()
    if s[0] =='T':
        count += 4
    elif s[0] == 'C':
        count += 6
    elif s[0] == 'O':
        count += 8
    elif s[0] == 'D':
        count += 12
    else:
        count += 20
print(count)