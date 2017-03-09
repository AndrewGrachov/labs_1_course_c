#include <iostream>
using namespace std;

int main() {
  //part0
  //variant 8

  int iMyInt1 = ~(18 + 8);
  cout << "Negate result: " << iMyInt1 << "\n";

  int iMyInt2 = (89 + 8) & (122 + 8);

  cout << "Bitwise and result: " << iMyInt2 << "\n";

  int iMyInt3 = (134 + 8) | (65 + 8);
  cout << "Bitwise or result: " << iMyInt3 << "\n";

  int iMyInt4 = (34 + 8)^(78 + 8);
  cout << "Bitwise xor result: " << iMyInt4 << "\n";

  int iMyInt5 = (907 + 8) << 9;

  cout << "Bitwise left shift result: " << iMyInt5 << "\n";

  int iMyInt6 = (-95 + 8) >> 9;

  cout << "Bitwise right shift result: " << iMyInt6 << "\n";

  return 0;
}