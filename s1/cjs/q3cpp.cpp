#include <iostream>
using namespace std;

void swapNumber(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    swapNumber(a, b);
    cout << a << " " << b << endl;
    return 0;
}