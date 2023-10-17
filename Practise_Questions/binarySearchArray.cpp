#include <iostream>
using namespace std;

int binarySearch(int arr[], int N, int size);

int main(void)
{
    int numbers[] = {2, 4, 6, 7, 8, 10, 12, 14};
    int key = 12;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = binarySearch(numbers, key, size);

    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}

int binarySearch(int arr[], int N, int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == N)
        {
            return mid;
        }
        else if (arr[mid] < N)
        { // right
            start = mid + 1;
        }
        else
        { // left
            end = mid - 1;
        }
    }

    return -1;
}