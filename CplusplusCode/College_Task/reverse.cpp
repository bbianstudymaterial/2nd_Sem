#include<iostream>
using namespace std;

int reverse(int n){
    int q, r, rn;
    q = n;
    while(q>0){
        r = q % 10;
        rn = rn * 10 + r;
        q = q / 10;
    }
    return rn;
}
int main(){
    int n;
    cout<<"Enter a integer number: ";
    cin>>n;
    cout<<"Reverse of the number is: "<<reverse(n)<<endl;
}