#include<iostream>
using namespace std;

int main(void) {
    string str="today";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++){
        cout<<*it; //* it used to access a character.
    }
    cout<<endl;
    return 0;
}