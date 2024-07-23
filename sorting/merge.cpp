#include <vector>

// merge_sort
// merger sort follows the divide and conquer approach... it divides the array
// into two halves, sorts the two halves and then merges them its recursive...so
// it keeps dividing the array until it gets to the base case

void merge_sort(std::vector<int> &arr) {
  int arrLength = arr.size();
  int mid = arrLength / 2;

  int rightLength = arrLength - mid;

  std::vector<int> leftArray(mid);
  std::vector<int> rightArray(rightLength);

  // copy the elements to the left array
  for (int i = 0; i < mid; i++) {
    leftArray[i] = arr[i];
  }

  // copy the rest of the elements to the right array
  for (int i = mid; i < arrLength; i++) {
    rightArray[i - mid] = arr[i];
  }

  // recursively call the merge_sort function
  merge_sort(leftArray);
  merge_sort(rightArray);
}

void merge(std::vector<int> &arr, std::vector<int> &left,
           std::vector<int> &right) {
  int leftLength = left.size();
}
