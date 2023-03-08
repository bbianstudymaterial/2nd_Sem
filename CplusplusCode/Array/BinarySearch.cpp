#include<iostream>
using namespace std;

int main(void) {
    int arr[50],n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter all the values: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mid, key, l, h;
    cout<<"Enter the key value: ";
    cin>>key;
    l = 0;
    h = n-1;
    while(l<=h){
        mid = (l+h)/2;
        if(arr[mid]==key){
            cout<<"Found at "<<mid+1<<" position"<<endl;
            return 0;
        }
        else if(key<arr[mid]){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<"Key not Found"<<endl;
    return 0;
}