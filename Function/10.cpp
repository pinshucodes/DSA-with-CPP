//gcd of two numbers

#include<iostream>
using namespace std;
int gcd(int a, int b){
    int cd=1;
    for(int i = min(a,b);i >= 1; i--){
        if( a% i== 0 && b%i ==0)
        cd=i;
        break;
    }
    return cd;
}
int main(){
    int a,b;
    cout<<"enter 1st number: "<<endl;
    cin>>a;
    cout<<"enter 2nd number: "<<endl;
    cin>>b;
    cout<<gcd(a,b);
    return 0;
}