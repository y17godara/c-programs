#include <iostream>
using namespace std;

char capital(char n) {
    // handle error
    if(n >= 'a' && n <= 'z'){ 
        return n-32;
    }
    return n;
}

int main(void) {
    char n;
    // n = 'a';
    cout << "Enter Char: ";
    cin >> n;
    char cap = capital(n);
    cout << cap;
}