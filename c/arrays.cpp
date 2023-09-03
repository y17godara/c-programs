#include<iostream>
using namespace std;

int myTest(int arr[]) {
    int equals = arr[0] + 1;
    return equals;
}
int main() {
    int array[10] = {1, 2, 3, 4, 5};
    int response = myTest(array);

    cout << "Response: " << response << endl;
    return 0;
}
