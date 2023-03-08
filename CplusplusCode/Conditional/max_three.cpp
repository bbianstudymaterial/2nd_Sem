#include<iostream>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >>c;
    int big = a;
    if(big<b){
        big = b;
    }
    if(big<c)
     big = c;
    cout<<"biggest = "<<big<<endl;
    return 0;
}