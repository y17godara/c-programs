#include <stdio.h>

int largestNumInArray(int arr[], int N)
{
  int largestNum = arr[0];
  int largestIndex = 0;
  for (int i = 0; i < N; i++)
  {
    if (arr[i] > largestNum)
    {
      largestNum = arr[i];
      largestIndex = i;
    }
  }
  return largestIndex;
}

int main(void)
{
  int arr[] = {2, 34, 45, 1, -33, 566, 300, -3, 0};
  int index = largestNumInArray(arr, sizeof(arr) / sizeof(arr[0]));

  if (index == -1)
  {
    printf("NOT FOUND!");
  }
  else
  {
    printf("Index of largest element: %d", index);
  }

  return 0;
}