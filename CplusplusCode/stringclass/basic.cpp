#include<iostream>
#include<string>
using namespace std;

int main(void) {
    string str; //It is the best way because the string can be of any size.
    cout<<"Enter a string: ";
    getline(cin,str);

    cout<<str<<endl;

    
    return 0;
}