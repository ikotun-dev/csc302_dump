// quick sort algorithm
//

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// swap function
// passing by reference so the original values are changed
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[high];
  int i = low - 1; // index of the smaller element
  //
  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[i + 1], arr[high]);
  return i + 1;
}

void quick_sort(vector<int> &arr, int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);

    quick_sort(arr, low, pi - 1);
    quick_sort(arr, pi + 1, high);
  }
}

int main() {
  vector<int> arr = {5, 6, 7, 8, 9, 0};
  quick_sort(arr, 0, arr.size() - 1);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
