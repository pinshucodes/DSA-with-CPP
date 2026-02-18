//pass by reference 
#include<iostream>
using namespace std;
int main(){
    int p=6;
    int &q=p;

    cout<<p<<endl;
    cout<<q<<endl;

    cout<<&p<<endl;
    cout<<&q<<endl;

    return 0;
}