#include<iostream>
using namespace std;

class Rectangle{
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
    Rectangle r;
    Rectangle *p;
    p = &r;
    p -> length = 10;   // -> is used to accessing the data members.
    p -> breadth = 14;
    cout<<"The area is: "<<p->area()<<endl;
    cout<<"The perimeter is: "<<p->perimeter()<<endl;
    
    return 0;
}