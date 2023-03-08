#include<iostream>
using namespace std;

int main(void) {
    int a[][2]={{2,2},{3,3},{4,4}};
    for(auto& x:a){
      for(int y:x){
        cout<<y<<" ";
      }
      cout<<endl;
    }
    return 0;
}