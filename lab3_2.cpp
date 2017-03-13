#include <iostream>
using namespace std;

int main() {
  //variant 11

  const int iSize = 10;

  char cMyArray1[iSize];
  char cMyArray2[iSize];
  char cMyArray3[iSize];

  for (int i = 0; i < iSize; i++) {
    cMyArray1[i] = (char)(2 * i + 40);
    cout << "First el: " << cMyArray1[i] << "\n";
    cMyArray2[i] = (char)(52 - 2 * i);
    cout << "Second el: " << cMyArray2[i] << "\n";
  }

  int index3 = 0;

  for (int i = 0; i < iSize; i++) {
    int iCodeValue1 = (int)(cMyArray1[i]);
    for (int j = 0; j < iSize; j++) {
      int iCodeValue2 = (int)(cMyArray2[j]);
      if (iCodeValue1 == iCodeValue2) {
        cMyArray3[index3] = (char)iCodeValue1;
        index3++;
        break;
      }
    }
  }

  int iMaxCode = 0;

  for (int i = 0; i < iSize; i++) {
    int iCharCode = cMyArray3[i];
    cout << "charCode: " << iCharCode << "\n";
    if (iCharCode > iMaxCode) {
      iMaxCode = iCharCode;
    }
  }

  cout << "MaxCode: " << iMaxCode << "\n";

  return 0;
}