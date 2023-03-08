#include<iostream>
using namespace std;

class Rectangle
{
    public:
       int length;
       int breadth;

       int area(){
           return length * breadth;
       }

       int perimeter(){
        return 2 * (length + breadth);
       }
};

int main(void) {

    Rectangle r1, r2;

    r1.length = 10;
    r1.breadth = 5;
    cout<<"The area of r1 is "<<r1.area()<<endl;
    cout<<"The perimeter of r1 is "<<r1.perimeter()<<endl;


    r2.length = 15;
    r2.breadth = 10;
    cout<<"The area of r2 is "<<r2.area()<<endl;
    cout<<"The perimeter of r2 is "<<r2.perimeter()<<endl;
        
    return 0;
}