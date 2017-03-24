#include <iostream>
using namespace std;

int main() {
  //variant 5
  const int iSize = 10;
  int fMyArray[iSize] = {};
  for (int i = 0; i < iSize; i++) {
    if (i % 2 == 0) {
      fMyArray[i] = i + 5;
    } else {
      fMyArray[i] = i - 5;
    }
  }

  for (int i = 0; i < iSize; i++) {
    cout << "array elem 2: " << fMyArray[i] << "\n";
  }

  // bubble sort
  for (int i = 0; i < iSize; i++) {
    int fValue = fMyArray[i];

    for (int j = i + 1; j < iSize; j++) {
      if (fMyArray[i] > fMyArray[j]) {
        int fIntermediate = fMyArray[i];
        fMyArray[i] = fMyArray[j];
        fMyArray[j] = fIntermediate;
      }
    }
  }

  for (int i = 0; i < iSize; i++) {
    cout << "array elem: " << fMyArray[i] << "\n";
  }
}