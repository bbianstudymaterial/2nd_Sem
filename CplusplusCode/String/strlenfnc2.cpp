#include<iostream>
#include<cstring>
using namespace std;

int main(void) {
    char s[20];

    cout<<"Enter a string: ";
    cin.getline(s,20);

    cout<<"Length: "<<strlen(s)<<endl;
    //It counts the length of a string.
    
    return 0;
}