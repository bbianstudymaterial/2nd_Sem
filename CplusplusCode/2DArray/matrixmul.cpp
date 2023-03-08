#include<iostream>
using namespace std;

int main(void) {
    int m,n,l,a[50][50],b[50][50],c[50][50];
    cout<<"Enter the order of matrix A: ";
    cin>>m>>n;
    cout<<"Enter the matrix A: "<<endl;
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      cin>>a[i][j];
    
    cout<<"Enter the order of matrix B: ";
    cin>>n>>l;
    cout<<"Enter the matrix B: "<<endl;
    for(int i=0;i<n;i++)
     for(int j=0;j<l;j++)
      cin>>b[i][j];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            c[i][j]+=a[i][j]*b[i][j];
        }
    }
    cout<<"Resultant matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}