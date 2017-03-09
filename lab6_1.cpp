#include <iostream>
#include <cmath>
using namespace std;

//variant 6


void zeroifyMaxColumn(float fMyArray[5][4], int iYSize, int iXSize) {

  float max = fMyArray[0][0];
  int maxColumn = 0;
  for (int i = 0; i < iYSize; i++) {
    for(int j = 0; j < iXSize; j++) {

      float fCursor = fMyArray[i][j];
      if (fCursor > max) {
        max = fCursor;
        maxColumn = j;
      }
    }
  }
  cout << "Max value: " << max << "\n";
  cout << "Column: " << maxColumn << "\n";

  for (int k = 0; k < iYSize; k++) {
    fMyArray[k][maxColumn] = 0;
  }
}

void setInversedRow(float fMyArray[5][4], float fRow[4], int iRowNumber) {
  for (int i = 0; i < 4; i++) {
    fRow[3 - i] = fMyArray[iRowNumber][i];
  }
}

int main() {

  const int iXSize = 4;
  const int iYSize = 5;

  float fMyArray[iYSize][iXSize] = {
                                        {2.5, 3.4, 5.2, 1.6},
                                        {3.2, 4.1, 6.2, 8.2},
                                        {3.5, 1.2, 2.7, 9.8},
                                        {1.1, 9.1, 3.9, 4.8},
                                        {5.3, 4.8, 1.1, 8.1}
                                      };

  zeroifyMaxColumn(fMyArray, iYSize, iXSize);
  cout << "Arr: " << fMyArray[0][3] << "\n";
  cout << "Arr: " << fMyArray[1][3] << "\n";
  cout << "Arr: " << fMyArray[2][3] << "\n";
  cout << "Arr: " << fMyArray[3][3] << "\n";
  cout << "Arr: " << fMyArray[4][3] << "\n";

  float fRow[iXSize] = {};
  setInversedRow(fMyArray, fRow, 4);

  for (int i = 0; i < 4; i++) {
    cout << "Inversed value: " << fRow[i] << "\n";
  }

  return 0;
}