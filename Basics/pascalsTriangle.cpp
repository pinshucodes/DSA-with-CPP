#include<iostream>
using namespace std;
int fact(int n){
    int facto=1;
    for(int i=2;i<=n;i++){
        facto*=i;
    }
    return facto;
}
int combi(int n , int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    cout<<"enter the size of pascals triangle:";
    cin>>n;
    for(int i=0;i<=n;i++){
        for( int j =0;j<=i;j++){
            cout<<combi(i,j) ;
        }
        cout<<endl;
    }
    return 0;
}