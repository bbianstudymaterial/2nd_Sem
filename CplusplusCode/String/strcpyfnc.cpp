#include<iostream>
#include<cstring>

using namespace std;

int main(void) {
    char s1[20]="Good ";
    char s2[20]="";

    strcpy(s2,s1);
    cout<<s2<<endl;
    
    return 0;
}