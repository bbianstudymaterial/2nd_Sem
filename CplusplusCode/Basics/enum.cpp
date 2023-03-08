#include<iostream>
using namespace std;

enum day {mon=1,tue,wed,thurs=10,fri,sat,sun};
enum dept {cs=1,it,ec,mech};

int main() {
    day d;
    d = tue;

    dept dep=it;
    cout<<dep<<endl;
    
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thurs<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
    cout<<d<<endl;
    
    return 0;
}