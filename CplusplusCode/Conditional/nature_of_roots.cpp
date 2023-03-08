#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a>> b >> c;
    d = (b*b) - (4*a*c);
    int r1, r2, r;
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);

    if(d==0){
        cout<<"Roots are real and equal"<<endl;
        cout<<"Roots are : "<<r1<<endl;
    }
    else if(d > 0){
        cout<<"Real and unequal roots:"<<endl;
        cout<<"Roots are: "<<r1<<" "<<r2<<endl;
    }
    else{
        cout<<"Roots are imaginary. "<<endl;
    }
    
    return 0;
}