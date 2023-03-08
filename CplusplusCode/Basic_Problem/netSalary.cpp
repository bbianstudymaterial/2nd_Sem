#include<iostream>
using namespace std;

int main() {
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;

    cout<<"Enter the Basic Salary: ";
    cin>>basic;
    cout<<"Enter the percent of Allowances: ";
    cin>>percentAllow;
    cout<<"Enter the percent of Deduct: ";
    cin>>percentDeduct;

    netSalary = basic + basic*percentAllow/100 - basic*percentDeduct/100;
    cout<<"Net Salary is : "<<netSalary<<endl;
    return 0;
}