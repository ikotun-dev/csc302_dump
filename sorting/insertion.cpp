#include <iostream>
#include <vector>

// insertion sort algorithm to sort the array by taking the current element
// aside and then comparing it with the rest of the elements and then inserting
// it in the correct position
//
//
//
void insertion_sort(std::vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    int current_element = arr[i];
    int j = i - 1;

    // move elements if they are greater than the first elements
    // while j is greater than or equal to 0 and the element at j is greater
    // than the first element
    while (j >= 0 && arr[j] > current_element) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }

    arr[j + 1] = current_element;
  }
}

int main() {
  std::vector<int> arr = {5, 6, 7, 8, 9, 0};
  insertion_sort(arr);
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  return 0;
}
