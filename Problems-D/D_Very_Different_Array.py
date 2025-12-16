# Function to calculate the maximum total difference for a single test case
def max_total_difference(n, m, a, b):
    
    differences = [(abs(ai - bi), ai, bi) for ai in a for bi in b]

    
    differences.sort(key=lambda x: x[0], reverse=True)

    
    for i in range(n):
        a[i] = differences[i][2]

    total_difference = sum(diff for diff, _, _ in differences[:n])

    return total_difference

# Input
t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    # Output the result for each test case
    print(max_total_difference(n, m, a, b))
