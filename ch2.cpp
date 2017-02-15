#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void insertion_sort(int n) {
  int length_arr = n;
  int arr [length_arr];
  for (int i = 0; i < length_arr; i++) {
    srand((unsigned int)time(NULL));
    arr[i] = rand();
  }
  for (int i = 0; i <length_arr; i++) {
    cout << arr[i] << endl;
  }
  // finish initialization of array
  for (int j = 1; j < length_arr; j++) {
    int key = arr[j];
    int i = j-1;
    while (i >= 0 && arr[i] > key) {
      arr[i+1] = arr[i];
      arr[i+1] = key;
    }
  }
  // finish reallocation of array
  for (int i = 0; i <length_arr; i++) {
    cout << arr[i] << endl;
  }
}

int main() {
  insertion_sort(10);
  return 0;
}
