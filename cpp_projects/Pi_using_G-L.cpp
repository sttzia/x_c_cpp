#include <iostream>
#include <math.h>
using namespace std; 

int k;

double getPi(int = k) {
  double num1, num2=0;
  const int p = 4;

  for(int i = 1; k >= i; i ++) {
    num1 = pow(-1, i + 1)/(2 * i - 1);
    num2 = num2 + num1;
  }
  return num2 * p;
}

int main() {
  cout << "Iterations: ";
  cin >> k;
  cout << "Pi is approximated to be " << getPi(k);
}