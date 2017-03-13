#include <iostream>
using namespace std;

int main() {
  //variant 12

  char * pIntSq;
  char * pIntSq2;
  char * pIntSq3;

  const int iLength = 10;

  //fill sequence 1
  pIntSq = new char[iLength];
  for (int i = 0; i < iLength; i++) {
    *(pIntSq + i) = (char)(2 * i + 40);
  }

  //fill sequence 2
  pIntSq2 = new char[iLength];
  for (int i = 0; i < iLength; i++) {
    *(pIntSq2 + i) = (char)(52 - 2 * i);
  }

  pIntSq3 = new char[iLength];
  int index = 0;

  // fill 3d sequence
  for (int i = 0; i < iLength; i++) {
    char cFirstSequenceValue = *(pIntSq + i);
    for (int j = 0; j < iLength; j++) {
      char cSecondSequenceValue = *(pIntSq2 + j);
      if (cFirstSequenceValue == cSecondSequenceValue) {
        *(pIntSq3 + index) = cFirstSequenceValue;
        index++;
      }
    }
  }

  //find max element by char Code
  char cMaxSymbol = (char)0;
  for (int i = index - 1; i > -1; i--) {
    char cSequenceValue = *(pIntSq3 + i);
    if ((int)(cSequenceValue) > int(cMaxSymbol)) {
      cMaxSymbol = cSequenceValue;
    }
  }
  cout << "max value: " << cMaxSymbol << " " << (int)cMaxSymbol << "\n";

  return 0;
}