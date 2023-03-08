#include<iostream>
using namespace std;

int main(void) {
    int x = 10;
    int &y = x;
    y = x + y;
    cout<<x<<endl;
    return 0;
}