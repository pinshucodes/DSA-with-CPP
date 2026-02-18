//more optimised code than previous code

#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,8,3,9,1};
    int n=6;
    // for printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // bubble sort algo

    for(int i=0;i<n-1;i++){   //n-1 passes
        bool flag= true;      //checking if sorting achieved
        for(int j=0;j<n-1-i;j++){        //traverse
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);//swaping of two number
                flag = false;
            }
        }
        if (flag==true){  //swap didn't happen
            break;
        }
    }
    cout<<endl;
    
    // for printing

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
