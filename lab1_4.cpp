#include <iostream>
using namespace std;

int main() {
  //variant 9
  ushort usMyShort = 612;
  int iMyInt = -805;
  float fMyFloat = 14.4328;
  double dMyDouble = -30.22E100;

  //typed pointers

  ushort* pusMyShort = &usMyShort;
  int* piMyInt = &iMyInt;
  float* pfMyFloat = &fMyFloat;
  double* pdMyDouble = &dMyDouble;


  //untyped

  void* pMyPointer;

  //dereference
  usMyShort = *pusMyShort;
  iMyInt = *piMyInt;
  fMyFloat = *pfMyFloat;
  dMyDouble = *pdMyDouble;

  pMyPointer = &usMyShort;


  cout << "Short: " << usMyShort << "\n";
  cout << "Int: " << iMyInt << "\n";
  cout << "Float: " << fMyFloat << "\n";
  cout << "Double: " << dMyDouble << "\n";

  cout << "Pointer address: " << pMyPointer << "\n";

  return 0;
}