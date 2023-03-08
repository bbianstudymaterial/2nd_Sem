#include<iostream>
using namespace std;

int main(void) {
    string str = "today";
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=str[i]-32;
    }
    cout<<str;
    cout<<endl;
    return 0;
}