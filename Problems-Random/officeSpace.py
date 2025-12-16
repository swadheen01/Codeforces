def largest_rectangle(hist):
    stack = []
    max_area = 0
    i = 0

    while i < len(hist):
        if not stack or hist[i] >= hist[stack[-1]]:
            stack.append(i)
            i += 1
        else:
            top = stack.pop()
            width = i if not stack else i - stack[-1] - 1
            max_area = max(max_area, hist[top] * width)

    while stack:
        top = stack.pop()
        width = i if not stack else i - stack[-1] - 1
        max_area = max(max_area, hist[top] * width)

    return max_area

def max_office_space(floor):
    m = len(floor)
    n = len(floor[0])

    hist = [0] * n
    max_area = 0

    for i in range(m):
        for j in range(n):
            if floor[i][j] == '1':
                hist[j] += 1
            else:
                hist[j] = 0

        max_area = max(max_area, largest_rectangle(hist))

    return max_area

def find_max_office_space(test_cases):
    for idx, floor in enumerate(test_cases, start=1):
        result = max_office_space(floor)
        print(f"Floor #{idx}: {result}")

# Input
t = int(input())
test_cases = []

for _ in range(t):
    m, n = map(int, input().split())
    floor = [input() for _ in range(m)]
    test_cases.append(floor)

# Output
find_max_office_space(test_cases)
