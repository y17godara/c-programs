#include<iostream>
using namespace std;

void printPatter1(int n) {
    for (int i = 0; i<n; i++) {
      
         for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }
       
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
         for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }

        cout << endl;
    }
}

void nStarTriangle(int n) {
    for(int i=n; i>=0; i--){
        for(int j=n-i+1; j>1; j--) {
            cout << " ";
        }

        for(int j=0; j<=2*i; j++) {
            cout << "*";
        }

        for(int j=n-i+1; j>1; j--) {
            cout << " ";
        }

        cout << endl;
    }
}

void nStarDiamond(int n) {
    cout << "Diamond Pattern" << endl;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        for(int j=0; j<2*i+1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i=n-1; i>0; i--) {
        for(int j=0; j<n-i; j++) {
            cout << " ";
        }

        for(int j=0; j<2*i-1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

// *
// **
// ***
// **
// *
void mStarTriangle(int n) {
    // Write your code here.
    for(int i=0; i<=n-2; i++) {
        for(int j=0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for(int i=n; i>0; i--){
        for(int j=i-1; j>=0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

// Input: ‘N’ = 3
// Output: 
// 1
// 0 1
// 1 0 1
void nBinaryTriangle(int n) {
    for(int i=0; i<n; i++){
        int s = i % 2;
        for(int j=0; j<=i; j++) {
            cout << s;
            s = 1-s;
        }
        cout << endl;
    }
}

// Input: ‘N’ = 3
// Output: 
// 1         1
// 1 2     2 1
// 1 2 3 3 2 1
void numberCrown(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }

        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " "; // Two spaces for alignment
        }

        for(int j=i; j>=1; j--){
            cout << j << " ";
        }

        cout << endl;
    }
}

// Input: ‘N’ = 3
// Output: 
// 1
// 2 3
// 4 5 6
void nNumberTriangle(int n) {
    int s = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << s << " ";
            s += 1;
        }
        cout << endl;
    }
}

// Input: ‘N’ = 3
// Output: 
// A
// A B
// A B C
void nLetterTriangle(int n) {
 
}

int main() {
    // printPatter1(5);
    // nStarTriangle(5);
    // nStarDiamond(5);
    // mStarTriangle(3);
    // nBinaryTriangle(4);
    // numberCrown(3);
    // nNumberTriangle(3);
    nLetterTriangle(3);

    return 0;
}