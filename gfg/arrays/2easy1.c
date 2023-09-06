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

void solution(int arr[], int N);

int main() {
    int arr[] = {12,34,56,34,67,2,65,13};
    int N = sizeof(arr) / sizeof(arr[0]);

    solution(arr, N);
    return 0;
}

void solution(int arr[], int N) {
    
}