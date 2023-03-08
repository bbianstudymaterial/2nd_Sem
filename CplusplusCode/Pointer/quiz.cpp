#include<iostream>
using namespace std;

int main(void) {
    int A[]={2,4,6,8,10,12};
    int *p = &A[3];
    cout<<p[-2]<<endl;
    return 0;
}