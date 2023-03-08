#include<iostream>
using namespace std;
int area(int b, int h){
   float a;
   a = 0.5 * (b * h);
   return a;
}
int main() {
    float a, b, h;
    cout<<"Enter the breadth and height of the triangle: ";
    cin>>b>>h;
    cout<<"The area of the triangle is : "<<area(b,h)<<endl;

    return 0;
}