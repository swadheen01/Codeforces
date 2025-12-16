def count_divisors(num):
    count = 0
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            count += 2 if i != num // i else 1
    return count

def custom_sort(x):
    return (count_divisors(x), -x)

def kth_number_after_sorting(arr, k):
    sorted_arr = sorted(arr, key=custom_sort)
    return sorted_arr[k - 1]

# Input
t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    
    # Output
    result = kth_number_after_sorting(arr, k)
    print(result)
