// time Complexity O(n)

#include<bits/stdc++.h>
#define E endl
using namespace std;
 
int SearchInRotaedSortedArray(int arr[],int n,int x){

    for(int i=0;i<n;i++){
        if(arr[i]==x)
            return i;      
    }
     return -1;
}

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=0;
    cout<<SearchInRotaedSortedArray(arr,n,x)<<E;
    return 0;
}


// expected output 4