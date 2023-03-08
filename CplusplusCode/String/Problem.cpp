#include<iostream>
using namespace std;

int main(void) {
    char s[100];
    char s1[100];
    cout<<"Enter your Name: ";
    cin.get(s,100);

    cout<<"Welcome "<<s<<endl;

    cout<<"Enter your Name again: ";
    cin.get(s1,100);

    cout<<"Welcome "<<s1<<endl;
    return 0;
}