#include <vector>
#include <iostream>
using namespace std;

void printDivisors(int n)
{
    vector<int> divisors;
    divisors.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            divisors.push_back(i);
        }
        else
        {
            continue;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}