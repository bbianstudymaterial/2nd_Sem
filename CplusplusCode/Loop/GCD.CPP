#include<iostream>
using namespace std;

int main(void) {
    int m, n;
    cout<<"Enter two number: ";cin>>m>>n;
    while (m!=n){
        if(m>n){
            m = m - n;
        }
        else{
            n = n - m;
        }
    }
    cout<<m<<endl;
    return 0;
}