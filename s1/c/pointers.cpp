#include <iostream>
using namespace std;

int main(void) {

    // pointer
    int a = 10;
    int *p;
    p = &a;
    cout << "Address of the variable a is " << p << endl;
    cout << "Address of the pointer p is " << & p;

    /* a variable that stores the address of another variable is called a pointer. Pointers are said to "point to" the variable whose address they store */

    // Dereference Operator
    // The reference and dereference operators are thus complementary: ● & is the address- of operator and can be read simply as "address of.” ● * is the dereference operator and can be read as "value pointed to by.”
    
    
    return 0;
}