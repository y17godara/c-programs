#include <iostream>
#include <math.h>
using namespace std;

int calDigits(int n)
{
    int digits = 0;

    while (n > 0)
    {
        int digit = n % 10;
        n /= 10;
        digits++;
    }
    return digits;
}

bool armStrongNumber(int n)
{
    int orignalNum = n; int rem; int power; long long result = 0;

    power = calDigits(orignalNum);

    while(n){
        rem = n % 10;
        result += pow(rem, power);
        n /= 10;
    }

    if(orignalNum != result) {
        return false;
    }
    return true;
}

int main(void)
{
    if(armStrongNumber(370)){
        cout << "True, Armstrong num";
    } else {
        cout << "False, Not Armstrong num";
    }

    return 0;
}