// divide array into two parts
// worst case O(n^2)
// average case O(n^2)
// best case O(n)
// stability -- stable

#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,8,3,9,1};
    int n=6;
    // for printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    // insertion sort algo

    for(int i=1; i<n; i++){
        for(int j=i; j>=1; j--){
            if(arr[j]>=arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
        }
    }

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
