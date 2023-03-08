#include<iostream>
using namespace std;

int main(void) {
    int x = 10;
    int &y = x; //It acts as nickname of X

    cout<<x<<endl;
    y++;
    x++;
    cout<<x<<endl;
    cout<<&x<<" "<<&y;

    
    return 0;
}