# the time complexity of the binary search algorithm is O(log n)
# i guess ( believe the array needs to be sorted for this to work)
#


def binary_search(arr, target):
    low = 0  # setting a lower bound  ( lowest index of the array)
    high = len(arr) - 1  # setting a higher bound (highest index of the array)

    # Iterative process as long as the low index is less than or equal to the high index
    while low <= high:
        mid = (low + high) // 2  # getting the middle index of the array
        if arr[mid] == target:  # if the middle value is the target
            print("mid value is: ", mid)
            return mid
        # if the middle value is less than the target then we need to search the right side of the array
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1


val = [2, 3, 4, 10, 40]
print(binary_search(val, 10))
