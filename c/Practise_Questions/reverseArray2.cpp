#include <iostream>
using namespace std;

int reverse(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main(void) {
    int numbers[] = {2, 4, 6, 7, 8, 10, 12, 14};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    reverse(numbers, sizeof(numbers) / sizeof(numbers[0]));
    return 0;
}