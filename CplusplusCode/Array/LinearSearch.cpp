#include<iostream>
using namespace std;
int linearSearch(int a[],int n){
    int key;
    cout<<"Enter the key to search: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==a[i]){
            cout<<"Found at " <<i<<"th position"<<endl;
            return 0;
        }
    }
    cout<<"Search Unsucessfull"<<endl;
    return 0;
}
int main(void) {
    int a[10],n=10;
    cout<<"Enter all the values: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    linearSearch(a,n);

    return 0;
}