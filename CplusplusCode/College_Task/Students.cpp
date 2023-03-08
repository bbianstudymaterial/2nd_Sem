#include<iostream>
using namespace std;

class student{
    private:
       int rollno, standard;
       float marks, percentage;
       char name[30];
    public: 
       void readDetails();
       void display();
};
void student::readDetails(){
    cout<<"Enter the Name: ";
    cin>>name;
    cout<<"Enter the Class: ";
    cin>>standard;
    cout<<"Enter the Total Marks out of 500: ";
    cin>>marks;
    percentage = marks/500 * 100;
    cout<<endl;
}
void student::display(){
    cout<<"Student details: "<<endl;
    cout<<"Name: "<<name <<", Rollno: "<<rollno<<", Class: "<<standard<<", Total: "<<marks<<", Percentage: "<<percentage<<endl;
    cout<<endl;
}
int main(){
    int n, loop;
    cout<<"Enter total number of Students? ";
    cin>>n;
    student std[n];
    for(loop = 0; loop<n; loop++){
        cout<<"Enter details of the student "<<loop+1<<": \n";
        std[loop].readDetails();
    }
    cout<<endl;
    for(loop = 0; loop<n;loop++){
        cout<<"Details of the student: "<<loop + 1<<": \n";
        std[loop].display();
    }

    return 0;
}