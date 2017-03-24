#include <iostream>
using namespace std;

int main() {
  //variant 5

  const int iSize = 10;

  char cMyArray1[iSize];
  char cMyArray2[iSize];
  char cMyArray3[iSize];

  for (int i = 0; i < iSize; i++) {
    cMyArray1[i] = (char)(120 - i);
    cout << "First el: " << cMyArray1[i] << "\n";
    cMyArray2[i] = (char)(110 + i);
    cout << "Second el: " << cMyArray2[i] << "\n";
  }


  for (int i = 0; i < iSize; i++) {
    cout << "element 1 array: " << cMyArray1[i] << "\n";
  }

  cout << "======" << "\n";
  for (int i = 0; i < iSize; i++) {
    cout << "element 2 array: " << cMyArray2[i] << "\n";
  }

  cout << "======" << "\n";


  int index3 = 0;
  //fill 3d array with equal values
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

  cout << "======" << "\n";
  for (int i = 0; i < iSize; i++) {
    cout << "element 3 array: " << cMyArray3[i] << "\n";
  }

  cout << "======" << "\n";

  const int iMaxCharCode = 115;
  int iElementsGreaterThanMaxCodeCount = 0;

  for (int i = 0; i < iSize; i++) {
    int iCharCode = cMyArray3[i];
    cout << "charCode: " << iCharCode << "\n";
    if (iCharCode > iMaxCharCode) {
      iElementsGreaterThanMaxCodeCount++;
    }
  }

  cout << "Codes count greater than 115: " << iElementsGreaterThanMaxCodeCount << "\n";

  return 0;
}