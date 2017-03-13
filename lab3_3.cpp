#include <iostream>
using namespace std;

int main() {
  //variant 10

  //part1

  const int xSize0 = 4;
  const int ySize0 = 5;

  float fMyDimensionalArray[ySize0][xSize0] = {
    {2.5, 6.7, 8.6, 2.5},
    {10.1, 23.5, 55.2, 28.1},
    {45.5, 15.8, 33.6, 90.4},
    {29.7, 38.3, 19.1, 56.2},
    {43.6, 62.8, 71.1, 29.9}
  };

  float fMyVector[xSize0];

  for (int i = 0; i < xSize0; i++) {
    float fColumnSum = 0;
    for (int j = 0; j < ySize0; j++) {
      fColumnSum += fMyDimensionalArray[j][i];
    }
    fMyVector[i] = fColumnSum;
  }

  for (int i = 0; i < xSize0; i++) {
    cout << "Column [" << i << "] sum: " << fMyVector[i] << "\n";
  }


  //part2
  const int xSize = 5;
  const int ySize = 4;

  int iMyDimensionalArray[ySize][xSize] = {
    {1, -2, 3, 5, -6},
    {-42, 5, -3, -24, 9},
    {-23, -21, 33, -44, -8},
    {66, -76, -1, -10, -24}
  };

  float iMyVector[xSize];

  for (int i = 0; i < xSize; i++) {
    int iSum = 0;
    int iCounter = 0;
    for (int j = 0; j < ySize; j++) {

      int elem = iMyDimensionalArray[j][i];
      if (elem < 0) {
        iSum += elem;
        iCounter++;
      }
    }

    iMyVector[i] = (float)iSum / (float)iCounter;
    cout << "iMyVector[" << i << "]: " << iMyVector[i] << "\n";
  }

  return 0;
}