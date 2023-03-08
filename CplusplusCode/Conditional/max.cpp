#include<bits/stdc++.h>
using namespace std;
void checkmax(int x, int y){

    if(x>y){
        cout<<"Maximum is "<<x<<endl;
    }
    else{
        cout<<"Maximum is "<<y<<endl;
    }
}
int main() {
    int x, y;
    cin>>x>>y;

    checkmax(x,y);

    return 0;
}