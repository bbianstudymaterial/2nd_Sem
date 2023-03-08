#include<iostream>
using namespace std;

int main(void) {
    int a[]={4,8,6,9,5,2,7};

    int sum = 0;
    for(auto x:a){ //For each 
        sum = sum + x;
    }
    cout<<"sum is: "<<sum<<endl;

    return 0;
}