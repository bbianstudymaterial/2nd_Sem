#include<iostream>
using namespace std;

int main(void) {
    int size;
    cout<<"Enter number of elements: ";
    cin>>size;
    int A[size];  //dynamic size is allowed in C++
    cout<<sizeof A<<endl;
    size = 35;

    return 0;
}