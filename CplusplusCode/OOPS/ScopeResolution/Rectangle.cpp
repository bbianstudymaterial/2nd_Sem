#include<iostream>
using namespace std;

class Rectangle{
    private:
       int length;
       int breadth;
    public:
        Rectangle(); //Non Parametric Constructor.
        Rectangle(int l, int b); //Parametric Constructor
        Rectangle(Rectangle &r); //Copy Constructor
        int getLength(){return length;} //Mutator 
        int getBreadth(){return breadth;}  //Mutator
        void setLength(int l);   //Accessor
        void setBreadth(int b);  //Accessor
        int area(); //functions or Facitator
        int perimeter(); //functions or Facitator
        bool isSquare(); //Inspector
        ~Rectangle(); //Destructor
};

int main(void) {
    Rectangle r1(10,10);
    cout<<"Area: "<<r1.area()<<endl;
    if(r1.isSquare())
      cout<<"Yes"<<endl;
    
    return 0;
}

Rectangle::Rectangle(){
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r){
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l){
    length = l;
}
void Rectangle::setBreadth(int b){
    breadth = b;
}
int Rectangle::area(){
    return length * breadth;
}
int Rectangle::perimeter(){
    return 2 * (length + breadth);
}
bool Rectangle::isSquare(){
    return length==breadth;
}
Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed";
}