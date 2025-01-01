#include <iostream>
using namespace std;

int power(int x, int n) {

  if (n == 0)
    return 1;
  if (n == 1)
    return x;
  // recursive call
  int ans = power(x, n / 2);
  if (n % 2 == 0)
  {
    // if even power
    return ans * ans;
  } else {
    return x * ans * ans;
  }
}

int main() {

  int x, n;
  cin >> x >> n;

  int ans = power(x, n);
  cout << ans;
  return 0;
}