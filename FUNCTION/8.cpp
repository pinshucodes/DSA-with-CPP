//printing all the prime numbers between two given numbers
#include<iostream>
using namespace std;
bool is_prime(int num){
    // for(int i=2;i<=(num-1);i++){
    //     if(num%i==0){
    //     return false;
    // } else{
    //     return true;
    // }
    // }


//try using different methods


    for(int i=2;i*i<=num;i++){
        if(num%i==0){
        return false;
    } else{
        return true;
    }
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}