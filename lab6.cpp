#include <iostream>
#include <cmath>
using namespace std;

float equality1(float x) {
  float sum = 0;
  for(int i = 1; i < 6; i++) {
    sum += (x + i) / (x - i);
  }
  return sum;
}

float equality2(float x) {
  return x * x + 5 * x + 4;
}

int main() {
  //variant 5

  float x0 = -2;
  const float x1 = 5;
  const float h = 0.2;

  while(x0 < x1) {
    float fVal;
    if (x0 < 1.0) {
      fVal = equality1(x0);
    } else {
      fVal = equality2(x0);
    }
    cout << "x: " << x0 << "  function value: " << fVal << "\n";
    x0 += h;
  }

  return 0;
}