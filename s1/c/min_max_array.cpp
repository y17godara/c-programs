// Program to find Smallest and Largest Int in Array
#include <iostream>
#include <climits>
using namespace std;

void findMinMax(int arr[], int length, int &arrMin, int &arrMax)
{
    arrMax = INT_MIN; // initialize maxNum to the smallest possible integer
    arrMin = INT_MAX; // initialize minNum to the largest possible integer

    for (int i = 0; i < length; i++)
    {
        if (arrMin > arr[i])
        {
            arrMin = arr[i];
        }
        if (arrMax < arr[i])
        {
            arrMax = arr[i];
        }
    }
}

int main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Values: \n";
        cin >> arr[i];
    }

    int arrMin, arrMax;
    findMinMax(arr, n, arrMin, arrMax);

    cout << "Numbers are: " << endl;
    cout << "Maximum: " << arrMax << endl;
    cout << "Minimum: " << arrMin << endl;

    return 0;
}
