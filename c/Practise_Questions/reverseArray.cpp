#include <iostream>
using namespace std;

int reverseArray(int arr[], int size) {
    while (size > 0) {
        cout << arr[size - 1] << " ";
        size--;
    }
}

int main(void) {
    int numbers[] = {2, 4, 6, 7, 8, 10, 12, 14};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    reverseArray(numbers, size);

    return 0;
}