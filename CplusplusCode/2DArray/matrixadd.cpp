#include<iostream>
using namespace std;

int main(void) {
    int m,n,A[50][50],B[50][50],C[50][50];
    cout<<"Enter the order of the matrix: ";
    cin>>m>>n;
    cout<<"Enter the matrix A: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter the matrix B: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j]+=A[i][j]+B[i][j];
        }
    }
    cout<<"Resultant matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}