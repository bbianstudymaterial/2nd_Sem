#include<iostream>
using namespace std;

int main() {
    char x = 127;
    //char ranges from -128 to 127
    //so the program is overflow

    char y = ++x;
    cout<<(int)x<<endl;

    return 0;
}