#include<iostream>
using namespace std;

int main(void) {
    int A[5];
    int i;

    for(i=0;i<5;i++){
        cout<<&A[i]<<endl; //&address
    }
    return 0;
}