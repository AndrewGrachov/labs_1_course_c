#include <iostream>
using namespace std;

int main() {

  //variant 11

  float fA1 = 7.4;
  float fB1 = 19.7;
  int iC1 = 60;
  int iD1 = 60;

  int iA2 = 17;
  int iB2 = 17;
  float fC2 = 8.3;
  float fD2 = 54.6;

  bool result1 = (!(fA1 < fB1) && (! (iC1 == iD1)));
  cout << "Result 1: " << result1 << "\n";

  bool result2 = (!(iA2 < iB2) && (! (fC2 == fD2)));
  cout << "Result 2: " << result2 << "\n";


  return 0;
}