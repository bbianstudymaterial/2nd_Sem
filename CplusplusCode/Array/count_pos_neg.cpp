#include<iostream>
using namespace std;

int main(void) {
    int n;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<"Total postive numbers are: "<<count<<endl;
    cout<<"Total negative numbers are: "<<n - count<<endl;

    return 0;
}