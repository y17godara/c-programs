#include <iostream>
using namespace std;

void square(int rows, int columns);

int main(void)
{
    int rows, columns;
    char ch;

    cout << "\nPlease Enter the Total Number of Rectangle Rows    =  ";
    cin >> rows;

    cout << "\nPlease Enter the Total Number of Rectangle Columns =  ";
    cin >> columns;

    cout << "\nPlease Enter Any Symbol to Print  =  ";
    cin >> ch;
    square(rows, columns);
}

void square(int rows, int columns)
{
    for(int i=0; i<rows; i++) {
        for(int j=0; i<columns; j++) {
            
        }
    }
}