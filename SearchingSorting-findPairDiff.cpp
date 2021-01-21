// Find Pair Given Difference
#include<bits/stdc++.h>
using namespace std;

int findPairdiff(int a[],int n,int x){

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(a[i]-a[j])==x){
                count=1;
            }
        }
    }

    if(count){
        return count;
    }
    else{
        return -1;
    }
}


int main(){
    int arr[]={90 ,70, 20, 80, 50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=45;

    cout<<findPairdiff(arr,n,x)<<"\n";

}