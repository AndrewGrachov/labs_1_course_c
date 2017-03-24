#include <iostream>
using namespace std;

int main() {
  //variant 5

  //part1
  const int xSize = 4;
  const int ySize = 4;

  int iMyDimensionalArray[ySize][xSize] = {
    {1, -2, 3, 5},
    {-42, 5, -3, -24},
    {-23, 21, 33, -34},
    {66, -76, -1, -10}
  };

  int iMyVector[xSize] = {0,0,0,0};

  for (int i = 0; i < xSize; i++) {
    if (iMyDimensionalArray[i][i] > 0) {
      iMyVector[i] = iMyDimensionalArray[i][i];
    }
    cout << "my new array element: " << iMyVector[i] << "\n";
  }
  cout << "=====> End of part 1 ============>" << "\n";

  //part2

  const int xSize0 = 5;
  const int ySize0 = 4;

  float fMyResultingArray[xSize0];

  float fMyDimensionalArray[ySize0][xSize0] = {
    {2.5, 6.7, 8.6, 2.5, 2.3},
    {10.1, 23.5, 55.2, 28.1, 2.6},
    {45.5, 15.8, 3.6, 2.4, 1.5},
    {29.7, 38.3, 19.1, 56.2, 3.9}
  };

  for (int i = 0; i < xSize0; i++) {
    float fMinColumnValue = fMyDimensionalArray[i][0];
    for (int j = 0; j < ySize0; j++) {
      float fComparableValue = fMyDimensionalArray[j][i];
      if (fComparableValue < fMinColumnValue) {
        fMinColumnValue = fComparableValue;
      }
    }
    fMyResultingArray[i] = fMinColumnValue;
    cout << "Min value for column " << i << ": " << fMinColumnValue << "\n";
  }

  return 0;
}