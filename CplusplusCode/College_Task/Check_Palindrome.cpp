#include<iostream>
using namespace std;
string check_palindrome(int n){
    int q, r, rn;
    q = n;
    while(q>0){
        r = q % 10;
        rn = rn * 10 + r;
        q = q / 10;
    }
    if(rn == n){
        return "It is a palindrome number";
    }
    else
     return "It is not a palindrome number";
}

int main(){
    int n;
    cout<<"Enter a integer number: ";
    cin>>n;
    cout<<endl;
    cout<<check_palindrome(n)<<endl;
}