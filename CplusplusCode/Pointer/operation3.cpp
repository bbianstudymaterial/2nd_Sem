#include<iostream>
using namespace std;

int main(void) {
    int A[5]{2,4,6,8,10};
    int *p = A;
    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<i[A]<<endl;
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<*p<<endl;
        p++;
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<*(A+i)<<endl;
    }
    return 0;
}