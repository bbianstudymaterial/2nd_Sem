#include<iostream>
#include<string>
using namespace std;

int main(){
 string str="Hello World";
 cout<<str.find_first_of("l")<<endl;
 cout<<str.find_first_of('l',3)<<endl;//It will start searching from index 3
 cout<<str.find_first_of('l',4)<<endl; //It will start searching from index 4
 cout<<str.find_first_of("le")<<endl; //It will print the index of anyone which index comes first.

 return 0;
}
