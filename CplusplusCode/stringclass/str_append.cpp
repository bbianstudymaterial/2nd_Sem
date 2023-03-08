#include<iostream>
#include<string>
using namespace std;

int main(void) {
    string str = "Hello, ";
    cout<<str.capacity()<<endl;
    str.append(" How are you? "); // It will added at the end of the Hello.
    cout<<str.length()<<" "<<str.capacity()<<endl;

    cout<<str<<endl;
    
    return 0;
}