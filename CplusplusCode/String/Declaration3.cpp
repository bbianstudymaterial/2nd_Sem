#include<iostream>
using namespace std;

int main(void) {
    char S[]={'H','e','l','l','o','\0'};
    cout<<S<<endl;
    char D[]={'H','e','l','l','o',0};
    cout<<D<<endl;
    return 0;
}