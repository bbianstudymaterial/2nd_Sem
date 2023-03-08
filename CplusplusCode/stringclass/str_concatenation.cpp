#include<iostream>
using namespace std;

int main(void) {
    string str = "Hello";
    string str2 = " World";

    str=str+str2;
    str = str + ", How are you? ";
    cout<<str<<endl;
    return 0;
}