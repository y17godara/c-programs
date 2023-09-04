// Find the largest three distinct elements in an array
// Input: arr[] = {10, 4, 3, 50, 23, 90}
// Output: 90, 50, 23
// https://www.geeksforgeeks.org/find-the-largest-three-elements-in-an-array/

#include <iostream>
#include <climits>
using namespace std;

int solution(int array[], int N) {

    // array should be atleast 3 element
    if (N < 3) {
        cout << "Wrong Input" << endl;
        return 1;
    }

    int first, second, third = INT_MIN; // included from <climits>

    for(int i=0; i<N; i++) {

        if(array[i] > first) {
            
            third = second;
            second = first;
            first = array[i];
        }
        else if(array[i] > second && array[i] != first) {

            third = second;
            second = array[i];
        }
        else if(array[i] > third && second != array[i] && first != array[i]) {

        }

    }

    cout << "Threee Largest elements are: " << first << " " << second << " " << third << endl;
    return 0;
}

int main(void) {
    int array[] = {10, 4, 3, 50, 23, 90};
    int N = sizeof(array) / sizeof(int);

    solution(array, N);
    return 0;
}