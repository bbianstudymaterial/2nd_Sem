#include<iostream>
using namespace std;
class Rectangle
{
    private: 
       int length;
       int breadth;
    public:
       Rectangle(){   // Non parameterized constructor.
        length = 1;
        breadth = 1;
       }
       Rectangle(int l, int b){ //Parameterized constructor
        setLength(l);
        setBreadth(b);
       }

       void setLength(int l){
        if(l<0){
            length = 1;
        }
        else{
           length = l;
        }
       }
       void setBreadth(int b){
        if(b<0){
            breadth = 1;
        }
        else
           breadth = b;
       }
       int getLength(){
        return length;
       }
       int getBreadth(){
        return breadth;
       }
       int area(){
        return length * breadth;
       }
       int perimeter(){
        return 2 * (length + breadth);
       }
};
int main(void) {
   Rectangle r1;
   cout<<r1.area()<<endl;
   Rectangle r2(10,5);
   cout<<r2.area()<<endl;
}