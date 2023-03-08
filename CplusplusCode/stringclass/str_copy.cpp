#include<iostream>
using namespace std;

int main(void) {
    string s = "Welcome";
    char str[10];
    s.copy(str,s.length());
    cout<<str<<endl;
    return 0;
}