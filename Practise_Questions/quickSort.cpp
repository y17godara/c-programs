#include <iostream>
#include <vector>
using namespace std;

// partitioning
int partition(vector<int> &a, int start, int end) {
    int pivot = a[start];
    int i = start + 1;
    int j = end;

    while (i <= j) {
        while (i <= j && a[i] <= pivot) {
            i++;
        }
        while (i <= j && a[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(a[i], a[j]);
        }
    }

    swap(a[start], a[j]);
    return j;
}

// quickSort
void quickSort(vector<int> &a, int start, int end) {
    // base case
    if (start >= end) {
        return;
    }

    // partitioning
    int pi = partition(a, start, end);

    // left part
    quickSort(a, start, pi - 1);

    // right part
    quickSort(a, pi + 1, end);
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
