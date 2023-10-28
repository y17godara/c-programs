#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solution(int N, char from, char to, char aux)
{
    // base case
    if (N == 0)
    {
        return;
    }

    // recursive case
    solution(N - 1, from, aux, to);

    // print step
    cout << "Move disk " << N << " from rod " << from
         << " to rod " << to << endl;

    // recursive case
    solution(N - 1, aux, to, from);
}

int main(void)
{
    int N = 3;
    solution(N, 'A', 'B', 'C');
    return 0;
}