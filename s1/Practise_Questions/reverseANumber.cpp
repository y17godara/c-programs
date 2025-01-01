#include <iostream>
using namespace std;

int reverseNumber(int n){
    int reverse = 0;

    while (n>0) {
        reverse = (reverse * 10)+ n%10;
        n /= 10;
    }
    return reverse;
}

int main(void){
    int n;
    cin >> n;

    int reverse = reverseNumber(n);
    cout <<reverse;
    return 0;
}