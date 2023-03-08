#include<iostream>
using namespace std;

int main(void) {
    string str1="Hello";
    string str2="Hello";
    cout<<str1.compare(str2)<<endl;

    string str3="Hello";
    string str4="World";
    cout<<str3.compare(str4)<<endl;

    string str5="Hello";
    string str6="hello";
    cout<<str5.compare(str6)<<endl;

    string str7="good";
    string str8="Morning";
    cout<<str7.compare(str8)<<endl;
    return 0;
}