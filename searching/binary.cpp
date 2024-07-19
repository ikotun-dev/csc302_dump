// binary search c++ version
// the python version of this is explanatory.
// the c++ version is just a direct translation of the python version

#include <iostream>
#include <vector>

int binary_search(std::vector<int> &arr, int target) {
  int low = 0;
  int high = arr.size() - 1;

  while (low <= high) {
    int mid = (low + high) / 2; // Corrected the mid calculation

    if (arr[mid] == target) { // Corrected comparison
      std::cout << "Found target at index: " << mid << std::endl;
      return mid;
    } else if (arr[mid] < target) { // Corrected comparison
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1; // Target not found
}


int main() {
  std::vector<int> val = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int target = 5;

  int result = binary_search(val, target);
  if (result == -1) {
    std::cout << "Target not found" << std::endl;
  }
  return 0;
}
