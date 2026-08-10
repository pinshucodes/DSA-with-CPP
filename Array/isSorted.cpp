#include<iostream>
using namespace std;


bool isSorted(int nums[],int size){
    for(int i=0;i<size;i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int nums[]={1,2,3,4,5,6,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<<"Result is:"<<isSorted(nums,n)<<endl;
    return 0;
}