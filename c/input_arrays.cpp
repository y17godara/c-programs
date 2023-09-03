#include<iostream>
using namespace std;

int printArray(int arr[], int n) {
    for(int i=0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

int takeArray() {
    int length; // length of array
    cout << "Enter Length of Array ";
    cin >> length;

    int array[length]; // array with length defined

    // loop to take input
    for(int i=0; i < length; i++) {
        cout << "Enter " << i << " element of array" << endl;
        cin >> array[i];
    }

    // loop to print array
    printArray(array, length);
    return 0;
}

// main function
int main() {
    takeArray(); // call takeArray function
    return 0;
}