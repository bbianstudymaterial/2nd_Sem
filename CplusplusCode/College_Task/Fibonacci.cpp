#include<iostream>
using namespace std;
void fibo(int n){
    int n1, n2, newterm;
    n1 = 0;
    n2 = 1;
    cout<<n1<<" "<<n2<<" ";
    newterm = n1 + n2;
    while(newterm<=n){
        cout<<newterm<<" ";
        n1 = n2;
        n2 = newterm;
        newterm = n1 + n2;
    }
}
int main(void){
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    cout<<"The fibonacci series is: \n";
    fibo(n);
    cout<<endl;
}