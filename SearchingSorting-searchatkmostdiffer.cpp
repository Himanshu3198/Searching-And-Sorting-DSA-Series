#include<bits/stdc++.h>
using namespace std;

int Search(int arr[],int n,int x,int k){
  
        int i=0;
        while(i<n){

            if(arr[i]==x){
                return i;
               
            }

            else{
                i=i+max(1,abs(arr[i]-x)/k);
            }
        }
}

int main(){

    int arr[]={20,40,50,70,70,60};
    int x=60;
    int k=20;
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<Search(arr,n,x,k)<<"\n";
    return 0;

}