#include<iostream>
using namespace std;

void updateString(string s) {
    s[0] = 'y';
    cout << "String: " << s << endl;
}

int main() {
    string s = "Yash";

    updateString(s);
    cout << "String: " << s << endl;
    return 0;
}