// Total Salary
// Write a program to calculate the total salary of a person. The user has to enter the basic
// salary (an integer) and the grade (an uppercase character), and depending upon which the salary is calculated as-
// totalSalary = basic + hra + da + allow – pf
// where :
// hra   = 20% of basic
// da    = 50% of basic
// allow = 1700 if grade = ‘A’
// allow = 1500 if grade = ‘B’
// allow = 1300 if grade = ‘C' or any other character
// pf    = 11% of basic.
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main(void) {
    double basic, totalSalary;
    float hra, da, allow, pf;
    char grade;

    cin >> basic >> grade;
    hra = (basic * 0.20);
    da = (basic * 0.50);
    pf = (basic * 0.11);

    if(grade == 'A'){
        allow = 1700;
    } else if(grade == 'B'){
        allow = 1500;
    } else {
        allow = 1300;
    }

    totalSalary = basic + hra + da + allow - pf;
    totalSalary = round(totalSalary); 
    cout << totalSalary;
    return 0;
}