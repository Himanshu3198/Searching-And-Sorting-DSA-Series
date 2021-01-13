// time compexity O(n)
#include<bits/stdc++.h>
#define E endl
using namespace std;
 
int ValueEqualToIndex(int arr[],int n){

    for(int i=0;i<n;i++){
        if(arr[i]==i)
            return i;      
    }
     return -1;
}

int main(){
    int arr[]={-10,5,0,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<ValueEqualToIndex(arr,n)<<E;
    return 0;
}


// expected output 3