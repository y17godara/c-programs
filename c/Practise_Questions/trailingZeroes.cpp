#include <iostream>
using namespace std;

int trailingZero(int n)
{
    int count = 0;
    while(n >= 5){
        count += n/5;
        n /= 5;
    }
    return count;
}

int main(void)
{
    int n = 1000; // 249
    int count = trailingZero(n);
    cout << "Trailing Zero: " << count << endl;
    return 0;
}