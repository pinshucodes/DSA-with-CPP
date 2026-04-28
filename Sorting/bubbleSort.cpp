//this is not optimised code for sorting
//for(int j=0;j<n-1-i;j++) => this is more optimised => we can optimise it more further
//we can also use in built function for sorting in case of vectors altough writing algorithm helps you build ur logic
//check time and space analysis for each case

#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,8,3,9,1};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){       //for(int j=0;j<n-1-i;j++) => this is more optimised
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);//swaping of two number
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
