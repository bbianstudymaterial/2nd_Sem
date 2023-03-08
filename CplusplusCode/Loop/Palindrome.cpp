#include<iostream>
using namespace std;

int main (void) {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int r, rn=0;
    int q;
    q = n;
    while(q>0){
        r = q % 10;
        rn = rn * 10 + r;
        q = q / 10;
    }
    if(rn == n){
        cout<<"It is a palindrome number."<<endl;
    }
    else{
        cout<<"It is not a palindrome number."<<endl;
    }
}
