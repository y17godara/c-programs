#include<iostream>
using namespace std;

// Pass by value
void updateString(string &s) {
    s[0] = 'y';
    cout << "String: " << s << endl;
}

// Pass by Reference
void printString(string s) {
    cout << "String: " << s << endl;
}

int main() {
    string s = "Yash"; // String
    updateString(s);
    printString(s);

    return 0;
}