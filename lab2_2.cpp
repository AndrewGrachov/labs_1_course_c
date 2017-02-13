#include <iostream>
using namespace std;

int max(int arr[4][4]) {
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    if (arr[0][i] > arr[1][i]) {
      cout << "Max element 1 column: " << arr[0][i] << "\n";
      sum += arr[0][i];
    } else {
      cout << "Max element 2 column: " << arr[1][i] << "\n";
      sum += arr[1][i];
    }
  }
  return sum;
}

int main() {
// Var 4

  float myArray1[4][5] = {{1.2, 2.3, 3.5, 4.1},{4.7, 3.3, 2.4, 1.3, 5.8}};
  int myArray2[4][4] = {{2,3,4,6}, {7,8,9,2}};

  float sum = 0;
  for (int i = 0; i < 4; i++) {
    sum += myArray1[0][i];
  }
  for (int i = 0; i < 5; i++) {
    sum += myArray1[1][i];
  }
  cout << "Sum of strokes: " << sum << "\n";

  int sumMaxColumns = max(myArray2);

  cout << "Sum of max columns elements: " << sumMaxColumns << "\n";

  return 0;
}