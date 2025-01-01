// Find Second largest element in an array
// Given an array of integers, our task is to write a program that efficiently finds the second-largest element present in the array.

// Input: arr[] = {12, 35, 1, 10, 34, 1}
// Output: The second largest element is 34.
// Explanation: The largest element of the
// array is 35 and the second
// largest element is 34

// Input: arr[] = {10, 5, 10}
// Output: The second largest element is 5.
// Explanation: The largest element of
// the array is 10 and the second
// largest element is 5

// Input: arr[] = {10, 10, 10}
// Output: The second largest does not exist.
// Explanation: Largest element of the array
// is 10 there is no second largest element

#include <stdio.h>
#include <stdbool.h>

void swap(int *left, int *right)
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
            if (arr[j] < arr[j + 1])
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

void solution(int arr[], int N)
{
    bubbleSorting(arr, N);

    int firstLargest = arr[0];
    int secondLargest = -1; // temp value

    for (int i = 0; i < N; i++)
    {
        if (arr[i] != firstLargest)
        {
            secondLargest = arr[i];
            break;
        }
    }

    if (secondLargest == -1)
    {
        printf("The second largest does not exist.\n");
    }
    else
    {
        printf("The second largest element is %d.\n", secondLargest);
    }
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int N = sizeof(arr) / sizeof(arr[0]);

    solution(arr, N);
    return 0;
}
