//printing the odd numbers between two 1 to n
#include<iostream>
using namespace std;

bool is_odd(int num){
    if(num % 2!=0){
        return true;
    } else{
        return false;
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(is_odd(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}