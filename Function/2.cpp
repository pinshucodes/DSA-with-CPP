//pass by value
#include<iostream>
using namespace std;
void changevalue(int z){
    z=100;
}
//try this as well
// void changevalue(int &z){
//     z=100;
// }
int main(){
    int a=5;
    changevalue(a);
    cout<<a<<endl;
    return 0;
}