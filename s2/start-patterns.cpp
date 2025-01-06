#include <iostream>
using namespace std;

void printPatter1(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {

            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void nStarTriangle(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = n - i + 1; j > 1; j--)
        {
            cout << " ";
        }

        for (int j = 0; j <= 2 * i; j++)
        {
            cout << "*";
        }

        for (int j = n - i + 1; j > 1; j--)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void nStarDiamond(int n)
{
    cout << "Diamond Pattern" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
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
void mStarTriangle(int n)
{
    // Write your code here.
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i > 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
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
void nBinaryTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        int s = i % 2;
        for (int j = 0; j <= i; j++)
        {
            cout << s;
            s = 1 - s;
        }
        cout << endl;
    }
}

// Input: ‘N’ = 3
// Output:
// 1         1
// 1 2     2 1
// 1 2 3 3 2 1
void numberCrown(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " "; // Two spaces for alignment
        }

        for (int j = i; j >= 1; j--)
        {
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
void nNumberTriangle(int n)
{
    int s = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
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
// void nLetterTriangle(int n) {
//  for(int i=1; i<=n; i++) {
//     for(int j=1; j<=i; j++) {
//        cout << char('A' + j - 1) << " ";
//     }
//     cout << endl;
//  }
// }

// #2
void nLetterTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    { // Outer loop for rows
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
        { // Inner loop for letters
            cout << ch << " ";
        }
        cout << endl; // Move to the next line
    }
}

//
// A B C
// A B
// A
void nLetterTriangle2(int n)
{
    // Write your code here.
}

//

/*
Input: ‘N’ = 3
Output:
C
C B
C B A
*/
void alphaTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        // for(int j=1; j<=i; j++){
        //     cout << char('D'-j) << " ";
        // }
        for (int j = 1; i >= j; j++)
        {
            cout << char('A' + (n - j)) << " ";
        }
        cout << endl;
    }
}

// Input: ‘N’ = 3
// Output:
// * * * * * *
// * *     * *
// *         *
// *         *
// * *     * *
// * * * * * *
void symmetry(int n)
{
    for (int i = 0; i < n; i++)
    {
        int spaces = 0;

        for (int k = 0; k < n - i; k++)
        {
            cout << "* ";
        }

        for (int s = 0; s < i * 2; s++)
        {
            cout << "  ";
        }

        for (int k = 0; k < n - i; k++)
        {
            cout << "* ";
        }

        spaces += 2;
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        int spaces = i * 2;

        for (int k = 0; k < i; k++)
        {
            cout << "*" << " ";
        }

        for (int s = n * 2; s > spaces; s--)
        {
            cout << "  ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << "* ";
        }

        spaces += 2;
        cout << endl;
    }
}

/*
Example:
Input: ‘N’ = 3

Output: 
*         *
* *     * *
* * * * * *
* *     * *
*         *
*/
void symmetry2(int n) {
    for (int i = n - 1; i >= 0; i--) {
        // Print leading spaces
        int spaces = 4;

        // Print numbers in ascending order
        for (int j = 1; j <= n-i; j++) {
            cout << "*" << " ";
        }

        for (int s = i*2; s > 0; s--) {
            cout << " " << " ";
        }

        for (int j = 1; j <= n-i; j++) {
            cout << "*" << " ";
        }

        spaces -= 2;
        cout << endl; // Move to the next line
    }

    for (int i = 1; i <= n - 1; i++) {
        // Print leading spaces
        int spaces = 4;

        // Print numbers in ascending order
        for (int j = 1; j <= n-i; j++) {
            cout << "*" << " ";
        }

        for (int s = i*2; s > 0; s--) {
            cout << " " << " ";
        }

        for (int j = 1; j <= n-i; j++) {
            cout << "*" << " ";
        }

        spaces -= 2;
        cout << endl; // Move to the next line
    }
}

// Input: ‘N’ = 4
// 1 <= N <= 10^2
// Output: 
// ****
// *  *
// *  *
// ****
void getStarPattern(int n) {
   // outer loop for no. of rows.
     for(int i=0;i<n;i++){
         
         // inner loop for printing the stars at borders only.
         for(int j=0;j<n;j++){
             
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
                
             // if not border index, print space.
             else cout<<" ";
         }
         
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
     }
}

// Input: ‘N’ = 4
// Output: 
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

void getNumberPattern(int n) {
  for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         
         // As soon as the numbers for each iteration are printed, we move to the
         // next row and give a line break otherwise all numbers
         // would get printed in 1 line.
         cout<<endl;
     }
}

int main()
{
    // printPatter1(5);
    // nStarTriangle(5);
    // nStarDiamond(5);
    // mStarTriangle(3);
    // nBinaryTriangle(4);
    // numberCrown(3);
    // nNumberTriangle(3);
    // nLetterTriangle(3);
    // nLetterTriangle2(3);

    // alphaTriangle(3);
    // symmetry(5);
    // symmetry2(3);
    // getStarPattern(3);
    getNumberPattern(3);

    return 0;
}