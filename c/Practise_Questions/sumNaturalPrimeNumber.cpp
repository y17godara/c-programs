#include <iostream>
using namespace std;

int calSumPrime(int a, int b)
{
    return 0;
}

int calSumNatural(int a, int b)
{
    int sum = 0;
    for (int i = 0; i <= b; i++)
    {
        sum += i;
    }
    return sum;
}

int calSumEven(int a, int b)
{
    return 0;
}

int calSumOdd(int a, int b)
{
    return 0;
}

int main(void)
{
    int a, b;

    long sumPrime = calSumPrime(a, b);
    long sumNAtural = calSumNatural(a, b);
    long sumEven = calSumEven(a, b);
    long sumOdd = calSumOdd(a, b);

    cout << "sumPrime: " << sumPrime << 
    return 0;
}