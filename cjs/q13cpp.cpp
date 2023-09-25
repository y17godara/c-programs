// Sum of Even and Odd Digits of a Number
#include <iostream>
using namespace std;

int main() {
  int n, even = 0, odd = 0;
  cin >> n;

  while (n > 0) {
    int rem = n % 10;
    if (rem % 2 == 0) {
      even += rem;
    } else {
      odd += rem;
    }
    n /= 10;
  }
  cout << even << " " << odd;
  return 0;
}