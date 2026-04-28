// selection sort only takes one pass
// total number of swaps n-1.  No of passes is less than bubble sort.
// time complexity in all cases O(n^2) wich is bad.
// it cant be further optimized.
// space complexity O(1)
// stability -- unstable
// use cases -- cost of swapping, "k" min ele from starting, if size of array is small


#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,8,3,9,1};
    int n=6;

    for(int ele : arr){
        cout<<ele<<" ";
    }
    
    cout<<endl;
    
    // pass
    for(int i=0; i<n-1; i++){
        int min = INT8_MAX;
        int mindx = -1;

        // swaps
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }

    return 0;
}
