#include <vector>
#include <iostream>

// merge_sort
// merger sort follows the divide and conquer approach... it divides the array
// into two halves, sorts the two halves and then merges them its recursive...so
// it keeps dividing the array until it gets to the base case

void merge_sort(std::vector<int> &arr)
{
  int arrLength = arr.size();

  // for base case
  if (arr.size() <= 1)
    return;
  int mid = arrLength / 2;

  int rightLength = arrLength - mid;

  // std::vector<int> leftArray(mid);
  // std::vector<int> rightArray(rightLength);

   std::vector<int> leftArray(arr.begin(), arr.begin() + mid);
    std::vector<int> rightArray(arr.begin() + mid, arr.end());

  // copy the elements to the left array
  // for (int i = 0; i < mid; i++)
  // {
  //   leftArray[i] = arr[i];
  // }

  // // copy the rest of the elements to the right array
  // for (int i = mid; i < arrLength; i++)
  // {
  //   rightArray[i - mid] = arr[i];
  // }

  // recursively call the merge_sort function
  merge_sort(leftArray);
  merge_sort(rightArray);
}

void merge(std::vector<int> &arr, std::vector<int> &left, std::vector<int> &right)
{
  int leftIndex = 0, rightIndex = 0, mergeIndex = 0;
  int leftLength = left.size(), rightLength = right.size();

  while (leftIndex < leftLength && rightIndex < rightLength)
  {
    if (left[leftIndex] < right[rightIndex])
    {
      arr[mergeIndex++] = left[leftIndex++];
    }
    else
    {
      arr[mergeIndex++] = right[rightIndex++];
    }
  }

  while (leftIndex < leftLength){
    arr[mergeIndex++] = left[leftIndex++];
  }

  while (rightIndex < rightLength){
    arr[mergeIndex++] = right[rightIndex++];
  }
}


int main(){

  std::vector<int> arr = {5, 6, 7, 8, 9, 0};

  merge_sort(arr);
  for (int i = 0; i < arr.size(); i++){
    std::cout << arr[i] << " ";
  }
  return 0;

}