#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="How you";
    str.insert(3," are");
    cout<<str<<endl;

    
    string str2="How you";
    str2.insert(3," area",4);
    cout<<str2<<endl;
}