#include <stdio.h>

void printArr(arr, N);

int main(void) {
    int arr[] = {56,34,13,6,89,123,23,45};
    int N = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, N);

    return 0;
}

void printArr(int arr[], int N) {
    printf("%s", "{");
    for(int i=0; i<N; i++) {
        printf("%s %i", " ", arr[i]);
    }
        printf("%s", " }");
}