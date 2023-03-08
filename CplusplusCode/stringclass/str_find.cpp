#include<iostream>
#include<string>
using namespace std;

int main(void) {
    string s = "How are you? ";
    cout<<s.find("are")<<endl;
    cout<<s.find('o')<<endl;
    cout<<s.find('u')<<endl;
    cout<<s.rfind('o')<<endl;
    cout<<s.find('k')<<endl; //Not found
    return 0;
}