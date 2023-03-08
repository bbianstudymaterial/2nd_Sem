#include<iostream>
using namespace std;

int main(void) {
    char s[100];
    cout<<"Enter your Name: ";
    cin.getline(s,100);
    cout<<"Welcome "<<s<<endl;
    return 0;
}