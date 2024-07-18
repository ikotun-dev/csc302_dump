// binary search c++ version
// the python version of this is explanatory.
//
#include <iostream>
#include <vector>

int binary_search(std::vector<int> &arr, int target) {
  int low = 0;
  int high = arr.size() - 1;

  while (low <= high) {
    int mid = (low + high); // 2;;

    if (mid == target) {
      std::cout << "Found target at index: " << mid << std::endl;
      return mid;
    } else if (mid < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  };

  return -1;
}

int main() {
  std::vector<int> val = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int target = 5;

  int result = binary_search(val, target);
  return 0;
}
