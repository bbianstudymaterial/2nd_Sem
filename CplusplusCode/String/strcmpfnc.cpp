#include<iostream>
#include<cstring>
using namespace std;

int main(void) {
    char s1[20]="Hello";
    char s2[20]="hello";
    cout<<strcmp(s1,s2)<<endl;
    //If first string is greater than  it will give postive result and if second string is greater than first string then it will give negative result. If it same it will give 0
    return 0;
}