#include <iostream>
using namespace std;

int main() {
  //variant 10
  const int iSize = 9;
  float fMyArray[iSize] = {};
  for (int i = 0; i < iSize; i++) {
    if (i % 2 == 0) {
      fMyArray[i] = 2.3 + i;
    } else {
      fMyArray[i] = 4.6 - i;
    }
  }

  // bubble sort
  for (int i = 0; i < iSize; i++) {
    float fValue = fMyArray[i];

    for (int j = i + 1; j < iSize; j++) {
      if (fMyArray[i] < fMyArray[j]) {
        float fIntermediate = fMyArray[i];
        fMyArray[i] = fMyArray[j];
        fMyArray[j] = fIntermediate;
      }
    }
  }

  for (int i = 0; i < iSize; i++) {
    cout << "array elem: " << fMyArray[i] << "\n";
  }
}