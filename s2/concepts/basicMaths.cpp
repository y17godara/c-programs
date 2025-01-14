#include<iostream>
using namespace std;

/*
    Basic Maths Concept
*/

// 7789 % 10 = 9
// 7789 / 10 = 778

// Count Digit
int countDigits(int n){
	int cnt = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        cnt += 1;
        n = n / 10;
    }

    cout << "No of Digits: " << cnt;
    return cnt;
}

// Reverse Digits of A Number
int reverseDigitsofANumber(int n) {
    int rev;
    return rev;
}

long reverseBits(long n) {
    long revBits;
    
    return revBits;
}

int main(){
    // countDigits(3);
    reverseDigitsofANumber(3567);
    reverseBits(55);

    return 0;
}