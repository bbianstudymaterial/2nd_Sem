#include<iostream>
using namespace std;

int main(void) {
    int *p = new int[20];

    delete []p;
    p = new int[40]; //Run time changing size

    return 0;
}