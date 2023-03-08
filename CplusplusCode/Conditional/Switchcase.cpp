#include<iostream>
using namespace std;

int main() {
    int day;
    cout<<"Enter day no: ";
    cin>>day;
    switch(day){
        case 1: cout<<"Mon";
        break;
        case 2: cout<<"Tue";
        break;
        default : cout<<"Not listed";
    }
    return 0;
}