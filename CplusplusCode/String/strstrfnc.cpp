#include<iostream>
#include<cstring>
using namespace std;

int main(void) {
    char s1[20]="Programming";
    char s2[20]="gram";

    cout<<strstr(s1,s2)<<endl;
    
    return 0;
}