#include<iostream>
using namespace std;

int main(void) {
    string str = "today";
    string::reverse_iterator it;
    for(it=str.rbegin();it!=str.rend();it++)
    {
        cout<<*it;
    }
    cout<<endl; 
    return 0;
}