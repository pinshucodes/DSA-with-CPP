#include<iostream>
using namespace std;
int main(){
    int n, r=0;
    cout<<"enter guven number:"<<endl;
    cin>>n;
    while(n!=0){
        int x = n%10;
        r=x+r*10;
        n=n/10;
    }
    cout<<"reverse:"<<r<<endl;
}