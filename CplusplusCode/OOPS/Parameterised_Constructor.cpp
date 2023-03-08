#include<iostream>
using namespace std;

class Rectangle{
    private: int length,breadth;
    public: 
        Rectangle(int l, int b);
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        void setLength(int l);
        void setBreadth(int b);
        int area();
};
int main(){
    int l, b;
    cout<<"Enter the length and breadth: ";
    cin>>l>>b;
    Rectangle r1(l, b);
    cout<<"Area: "<<r1.area()<<endl;
}
Rectangle::Rectangle(int l, int b){
    setLength(l);
    setBreadth(b);
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