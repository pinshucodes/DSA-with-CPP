//square of first 5 natural number
//try using another method
#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}
int main(){
    // int n;
    // cin>>n;
    for(int i=1;i<=9;i++){
        cout<<square(i)<<endl;
        
    }
    return 0;
}