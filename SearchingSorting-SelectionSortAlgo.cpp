// Selection Sort Implementation using cpp 
// time complexity O(n^2)

#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){
 
   for(int i=0;i<n-1;i++){
       int min_index=i;

       for(int j=i+1;j<n;j++){
           if(arr[j]<arr[min_index]){

               min_index=j;
               swap(arr[min_index],arr[i]);
           }
       }
   }
}


int main(){

    int arr[]={2,1,3,6,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    SelectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}