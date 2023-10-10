#include <iostream>
using namespace std;

int subArray(int arr[], int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        for (int j = 1; j <= size - 1; j++)
        {
            // sub array
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
    }
}


int main()
{
    int arr[] = {2, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    subArray(arr, size);

    return 0;
}