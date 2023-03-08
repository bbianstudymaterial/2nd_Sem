#include<iostream>
using namespace std;
class fibo{
    private: int lastterm, n1 = 0, n2 = 1;
    public:
       fibo(int n);
       int getN(){return lastterm;}
       void setN();
       int fiboseries();    
};
int main(){
    int n;
    cout<<"Enter the last term: ";
    cin>>n;
    fibo f1(n);
    cout<<"Fibonacii series: "<<endl<<f1.fiboseries;
}
fibo::fibo(int n){
    setN(n);
}
void fibo::setN(int n){
    lastterm=n;
}
void fibo::fiboseries(){
    cout<<n1<<" "<<n2<<" ";
    int newterm;
    newterm = n1 + n2;
    while(newterm<=lastterm){
        cout<<newterm<<" ";
        n1 = n2;
        n2 = newterm;
        newterm = n1 + n2;
    }
}
