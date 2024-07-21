#include <iostream>
#include <vector>

// bubble sort algorithm to sort the array
//
void bubble_sort(std::vector<int> &arr) {
  // just loop and exchange it basically
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      if (arr[j] < arr[j + 1]) {
        arr[j], arr[j + 1] = arr[j + 1], arr[j];
        // int temp = arr[j];
        // arr[j] = arr[j + 1];
        // arr[j + 1] = temp;
      }
    }
  }
  // return array.. just for you to see
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
}

int main() {
  std::vector<int> arr = {5, 6, 7, 8, 9, 0};
  bubble_sort(arr);
  return 0;
}
