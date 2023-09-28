#include <bits/stdc++.h>

#include <iostream>

using namespace std;

// Write your totalPrime function here

int totalPrime(int S, int E)

{
    int a = 0;

    for (int i = S; i <= E; i++)

    {

        int count = 0;

        for (int j = 2; j <= i / 2; j++)

        {

            if (i % j == 0)

            {

                count++;

                break;
            }
        }

        if (count == 0)

        {

            a++;
        }
    }

    return a;
}

int main()
{

    int S, E;

    cin >> S >> E;

    cout << totalPrime(S, E);

    return 0;
}