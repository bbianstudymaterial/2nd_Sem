#include<iostream>
using namespace std;

int main(void) {
    string str="WelcOmE7";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    return 0;
}