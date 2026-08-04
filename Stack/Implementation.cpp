 #include <iostream>
 using namespace std;
 int main(){
    int height[12]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n = 12;
   //  int p[12];
   //  p[0]=-1;
   //  int mx=h[0];
   //  for(int i=1;i<12;i++){
   //    if(mx>=h[i]){
   //       p[i]=mx;
   //    }
   //    else p[i]=h[i];
   //    mx=p[i];
   //  }

   // next greater element
        int next[n];
        next[n-1]=-1;
        int mx=height[n-1];
        for(int i=n-2;i>=0;i--){
            if(mx>=height[i]) next[i]=mx;
            else next[i]=height[i];
            mx=next[i];
        }

    for(int j=0;j<12;j++){
      cout<<next[j]<<" ";
    }



    return 0;
 }