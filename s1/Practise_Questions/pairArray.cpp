#include <iostream>
using namespace std;

int pairArray(int arr[], int size) {
    for(int i; i<=size-1; i++){
        for(int j=0; j<=i; j++){
            cout << "(" << i << "," << j << ")";
        }
    }
}

int main() {
    int arr[] = {2, 4, 6, 7, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    pairArray(arr, size);
    return 0;
}