#include <iostream>
using namespace std;

int main() {

  //variant 6

  int * pIntSq;
  const int iLength = 10;
  int iSum = 0;

  pIntSq = new int[iLength];
  for (int i = 0; i < iLength; i++) {
    if (i % 2 == 0) {
      *(pIntSq + i) = i + 5;
    } else {
      *(pIntSq + i) = i - 5;
    }
    iSum += *(pIntSq + i);
    cout << "Address value: " << *(pIntSq + i) << "\n";
  }

  cout << "SUm: " << iSum << "\n";
  float fMedian = (float)iSum / (float)iLength;
  cout << "Aryphmetic median : " << fMedian << "\n";

  delete pIntSq;
  return 0;
}