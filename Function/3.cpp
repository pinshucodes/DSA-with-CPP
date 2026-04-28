#include<iostream>
using namespace std;
int sum(int a,int b=3,int c=8){
    return (a+b+c);
}
int main(){

    cout<<sum(2)<<endl;//13
    cout<<(2,6)<<endl;//16-in these cases we are passing the value of b andc explicitly inspite of using previous data
    cout<<(3,9,4)<<endl;//16

    return 0;
}