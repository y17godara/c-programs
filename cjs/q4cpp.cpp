#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int principal_amount, time_period;
    float rate_interest, simple_interest;
    cin >> principal_amount >> rate_interest >> time_period;
    simple_interest = (int)(principal_amount * rate_interest * time_period) / 100;
    cout << simple_interest << endl;
    return 0;
}