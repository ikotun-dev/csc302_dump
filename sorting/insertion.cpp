// insertion search
/**
#include <iostream>
#include <vector>
int insertion_sort(std::vector<int> &arr){
  //loop through the array
  for(int i = 1; i < arr.size();  i++){
    //store the current element
    int current = arr[i];
    //store the index of the previous element
    int j = i - 1;
    //loop through the array until the current element is greater than the
previous element while(j >= 0 && arr[j] > current){ arr[j + 1] = arr[j]; j--;
    }
    //insert the current element
    arr[j + 1] = current;
  }
}

int main(){
    std::vector<int> arr = {5, 6, 7, 8, 9, 0};
    insertion_sort(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }

}

*/

#include <vector>
int insertion_sort(std::vector<int> &arr) {
  for (int i = 1; i < arr.size(); i++) {
    int current = arr[i];
    int j = i - 1;
  };
}
