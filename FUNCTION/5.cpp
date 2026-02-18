#include<iostream>
using namespace std;

int area(int length,int breadth){
    area=(length*breadth);
    return area;
}
int main(){
    area(7,8);
    cout<<area<<endl;
    return 0;
}