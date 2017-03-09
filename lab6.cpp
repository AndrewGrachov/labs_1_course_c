#include <iostream>
#include <cmath>
using namespace std;

float equality1(float x) {
  float fMultiplicity = 0.0;
  for (int i = 4; i < 7; i++) {
    fMultiplicity += (i + x / i - x);
  }
  return fMultiplicity;
}

float equality2(float x) {
  return (x + 2) * (x - 2);
}

float myFunc(float x0, float x1, float h) {
  while(x0 < x1) {
    float fVal;
    if (x0 < 3) {
      fVal = equality1(x0);
    } else {
      fVal = equality2(x0);
    }
    cout << "function value: " << fVal << "\n";
    x0 += h;
  }
}

int main() {
  //variant 6

  const int x0 = -1;
  const int x1 = 6;
  const float h = 0.3;
  myFunc(x0, x1, h);
  return 0;
}