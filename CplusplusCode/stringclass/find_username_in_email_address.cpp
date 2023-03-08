#include<iostream>
using namespace std;

int main(void) {
    string emailadd = "monojityengkhom7@gmail.com";

    int i;
    i =(int) emailadd.find('@');

    cout<<"Hello, "<<emailadd.substr(0,i)<<endl;

    return 0;
}