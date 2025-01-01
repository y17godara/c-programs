#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countBits(int n) {
  int binary = 0;
  while (n) {
    binary += n & 1; // Add the LSB to the count if it's 1
    n >>= 1;         // Right-shift n to check the next bit
  }

  return binary;
}

int main() {
  int n;
  cin >> n;
  cout << countBits(n);
  return 0;
}