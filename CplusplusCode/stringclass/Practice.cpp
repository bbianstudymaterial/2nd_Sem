#include<iostream>
using namespace std;

int main(void) {
    string str = "WELCOME";
    string::iterator it;
    int count;
    for(it=str.begin();it!=str.end();it++){
        count++;
    }
    cout<<count<<endl;
    return 0;
}