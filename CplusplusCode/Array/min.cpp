#include<iostream>
using namespace std;

int main(void) {
    int n;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"The minimum is : "<<min<<endl;
    
    return 0;
}