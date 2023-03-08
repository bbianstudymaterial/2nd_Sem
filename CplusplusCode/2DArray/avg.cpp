#include<iostream>
using namespace std;

int main(void) {
    int n, i;
    float num[100], sum =0.0, average;

    cout<<"Enter the numbers of element: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<< i + 1 <<", Enter number: ";
        cin>>num[i];
        sum += num[i];
    }
    average = sum / n;
    cout<<"Average = "<<average<<endl;
    
    return 0;
}