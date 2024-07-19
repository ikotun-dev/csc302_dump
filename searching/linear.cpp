// linear search

#include <iostream>
#include <vector>

// this is self explanatory -> just iterate through the array and check if the
// element is equal to the target
// time complexity: O(n) -> time taken is proportional to the number of elements
//

// in the array
//
//
//

int linear_search(std::vector<int> &arr, int target) {

  for (int i = 0; i < arr.size(); i++) {

    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 5;
  int result = linear_search(arr, target);
  if (result != -1) {
    std::cout << "Element found at index: " << result << std::endl;
  } else {
    std::cout << "Element not found in the array" << std::endl;
  }
  
}
