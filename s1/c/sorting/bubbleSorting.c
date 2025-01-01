//smallest to largest
// Time Complexity: O(N2)
// Auxiliary Space: O(1)
#include <stdio.h>
#include <stdbool.h>

void printArr(int arr[], int N);
void bubbleSorting(int arr[], int N);
void swap(int* left, int* right);

int main(void)
{
    int arr[] = {56, 34, 13, 6, 89, 123, 23, 45};
    int N = sizeof(arr) / sizeof(arr[0]);

    bubbleSorting(arr, N);
    printArr(arr, N);

    return 0;
}

void printArr(int arr[], int N)
{
    printf("%s", "{");
    for (int i = 0; i < N; i++)
    {
        printf("%s %i", " ", arr[i]);
    }
    printf("%s", " }");
}

void swap(int* left, int* right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}

void bubbleSorting(int arr[], int N)
{

    bool swapped;

    // sorting
    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            // sort
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}