#include <iostream>
#include <cmath>
using namespace std;

//variant 6

void printArray(int iMyArray[5][5]) {

}


void swapBiggestElementWithRightBottom(int iMyArray[5][4], int iYSize, int iXSize) {

  int iMax = iMyArray[0][0];
  int xIndex = 0;
  int yIndex = 0;

  for (int i = 0; i < iYSize; i++) {
    for(int j = 0; j < iXSize; j++) {

      int fCursor = iMyArray[i][j];
      if (fCursor > iMax) {
        iMax = fCursor;
        xIndex = j;
        yIndex = i;
      }
    }
  }
  cout << "Max value: " << iMax << "\n";
  cout << "Column: " << xIndex << "\n";
  cout << "Row: " << yIndex << "\n";

  int iRightBottomElement = iMyArray[iYSize - 1][iXSize - 1];
  cout << "iRightBottomElement: " << iRightBottomElement << "\n";
  iMyArray[iYSize - 1][iXSize - 1] = iMax;
  iMyArray[yIndex][xIndex] = iRightBottomElement;

}

void setPairSortedRow(int iMyArray[5][4], int iRow[4], int iRowNumber) {
  int index = 0;

  for (int i = 0; i < 4; i = i + 2) {
    int iElement = iMyArray[iRowNumber][i];
    iRow[index] = iElement;
    index++;
  }

  for (int i = 1; i < 4; i = i + 2) {
    int iElement = iMyArray[iRowNumber][i];
    iRow[index] = iElement;
    index++;
  }
}

int main() {

  const int iXSize = 4;
  const int iYSize = 5;

  int iMyArray[iYSize][iXSize] = {
                                        {2, 4, 5, 6},
                                        {3, 1, 6, 8},
                                        {5, 2, 7, 9},
                                        {1, 1, 9, 4},
                                        {4, 8, 1, 1}
                                      };

  swapBiggestElementWithRightBottom(iMyArray, iYSize, iXSize);
  cout << "Arr: " << iMyArray[0][3] << "\n";
  cout << "Arr: " << iMyArray[1][3] << "\n";
  cout << "Arr: " << iMyArray[2][3] << "\n";
  cout << "Arr: " << iMyArray[3][3] << "\n";
  cout << "Arr: " << iMyArray[4][3] << "\n";

  int iRow[iXSize] = {};
  const int rowToInverse = 4;
  cout << "Row: " << iMyArray[4][0] << "\n";
  cout << "Row: " << iMyArray[4][1] << "\n";
  cout << "Row: " << iMyArray[4][2] << "\n";
  cout << "Row: " << iMyArray[4][3] << "\n";
  setPairSortedRow(iMyArray, iRow, rowToInverse);

  cout << "Rowz: " << iRow[0] << "\n";
  cout << "Rowz: " << iRow[1] << "\n";
  cout << "Rowz: " << iRow[2] << "\n";
  cout << "Rowz: " << iRow[3] << "\n";

  return 0;
}