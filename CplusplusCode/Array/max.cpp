#include<iostream>
using namespace std;

int main(void) {
    int A[]={4,8,6,9,5,2,7};

    int max = A[0],n=7;
    for(int i=1;i<n;i++){
        if(max<A[i]){
            max = A[i];
        }
    }
    cout<<"The maximum number is: "<<max<<endl;
    return 0;
}