#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int arr[],int n){
    struct Pair minmax;
    if(n==1){
       minmax.min=arr[0];
       minmax.max=arr[0];
       return minmax;
    }

    if(arr[0]>arr[1]){
        minmax.max=arr[0];
        minmax.min=arr[1];
    }

    else{
           minmax.max=arr[1];
        minmax.min=arr[0];
    }

    for(int i=2;i<n;i++){
        if(arr[i]>minmax.max){
            minmax.max=arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min=arr[i];
        }
    }
    return minmax;

}
int main(){
    int arr[]={1,2,3,4000};
    int n=sizeof(arr)/sizeof(arr[0]);
    struct Pair result=getMinMax(arr,n);
   cout<<result.min<<" "<<result.max<<"\n";


    
}