# time complexity of the bubble sort algorithm is O(n^2)....worst case scenario ( i guess 😂)
# This is because the algorithm has to run through the array
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):  # This is to run the process multiple times
        print(f"interation [{i}] : arr - > {arr}")
        # its n-i-1 because we dont need to compare the last element
        for j in range(0, n - i - 1):  # this is for comparing and doing the swapping
            # if the current element is greater than the next element
            if arr[j] > arr[j + 1]:
                # swapping the elements
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

    return arr


val = [64, 34, 25, 12, 22, 11, 90]
print(bubble_sort(val))
