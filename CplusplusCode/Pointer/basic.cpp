#include<iostream>
using namespace std;

int main(void) {
    int *p = new int[5]; //declaration
    p[0] = 12; //Initialization
    p[1] = 13; //Initialization
    cout<<p[1]<<endl;


    delete []p; //dealocating pointer
    p = nullptr; //deallocating
    return 0;
}