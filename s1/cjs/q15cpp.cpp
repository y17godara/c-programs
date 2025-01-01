// Factorial of a Number
#include <iostream>
using namespace std;

int main() {
  int n;
  int factorial = 1;
  
  cin >> n;

  if (n < 0) {
    cout << "Error";
  } else {
    for (int i = 1; i <= n; i++) {
      factorial = factorial * i;
    }
    cout << factorial;
  }
  return 0;
}