#include<iostream>
using namespace std;

typedef int marks;

int main() {
    marks m1, m2;
    
    m1 = 50;
    m2 = 90;
    
    cout<<sizeof(marks)<<endl;
    cout<<m1 + m2 <<endl;
    return 0;
}