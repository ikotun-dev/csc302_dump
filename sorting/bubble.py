def bubble_sort(arr):
    n = len(arr)
    for i in range(n):  # This is to run the process multiple times
        print(f"interation [{i}] : arr - > {arr}")
        for j in range(0, n - i - 1):  # this is for comparing and doing the swapping
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

    return arr


val = [64, 34, 25, 12, 22, 11, 90]
print(bubble_sort(val))
