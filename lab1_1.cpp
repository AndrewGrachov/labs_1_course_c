#include <iostream>
using namespace std;

int main() {
  const int iMyInt0 = 23;
  int iMyInt4;
  iMyInt4 = 45;

  //variant 4

  short sMyShort = 1c; //error
  short sMyShort2 = -88;
  short sMyShort3 = 510;

  int iMyInt1 = 1024;
  int iMyInt2 = -61.37; //warning
  int iMyInt3 = 337752; //error

  long lMyLong1 = 4015642735;
  long lMyLong2 = -97.8; //warn
  long lMyLong3 = 2768;

  ushort usMyUnsignedShort1 = 438;
  ushort usMyUnsignedShort2 = 74234; //warning
  ushort usMyUnsignedShort3 = -65; //error

  //part 2

  //variant 4

  float fMyFloat1 = 765.23E29; //
  float fMyFloat2 = -123456789086.9;
  float fMyFloat3 = 76.5E-400; //warn

  double dMyDouble1 = -0.435E-432; //warn
  double dMyDouble2 = 9876.456E201;


  //part 3


  //variant 4

  int iMyInt6 = -34;
  int iMyInt7 = -98;

  int iMySum = 345 - 55;

  int iMySubtractResult = 43 - 87;
  int iMyMultiplyResult = 7 * 23;

  int iMyDivisionResult1 = 18 / 6;
  int iMyDivisionResult2 = 18 / 5;

  int iMyLastingResult = 19 % 4;
  float fMyDivisionResult = 81 / 10;


  return 0;
}