#include<iostream>
#include<cstring>

using namespace std;

int main(void) {
    char s1[20]="Good ";
    char s2[20]="";

    strncpy(s2,s1,3);
    cout<<s2<<endl;
    
    return 0;
}