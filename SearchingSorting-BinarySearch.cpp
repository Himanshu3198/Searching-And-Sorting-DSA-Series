#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int *arr,int n,int k){


    int l=0,r=n-1;


    while(l<=r){
         int mid=(l+r)/2;

        if(arr[mid]==k){

            cout<<"\nelement found at position "<<mid<<" is \n";
            return arr[mid];
        }

        if(k>arr[mid]){
          l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}

int main(){

    int arr[]={1,2,3,8,10,13,17};

        // int arr[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};


     int n=sizeof(arr)/sizeof(arr[0]);

     int k=13;

     cout<<BinarySearch(arr,n,k);
     return 0;
}