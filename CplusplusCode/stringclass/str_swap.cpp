#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1="Programming";
    string str2="Language";

    cout<<str1<<endl<<str2<<endl;

    cout<<"  After Swapping "<<endl;

    str1.swap(str2);

    cout<<str1<<endl<<str2<<endl;
}