// C = (F - 32) * 5.0 / 9.0
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int S, E, W;
  int C;
  cin >> S >> E >> W;

  for (int i = S; i <= E; i += W) {
    C = (i - 32) * 5.0 / 9.0;
    cout << i << " " << C << endl;
  }
  return 0;
}