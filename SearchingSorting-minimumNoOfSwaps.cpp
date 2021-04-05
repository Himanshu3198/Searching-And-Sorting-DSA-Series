


#include<bits/stdc++.h>
using namespace std;


int solve(int *arr,int n){
   
     pair<int,int> arrPos[n];
     for(int i=0;i<n;i++){
         arrPos[i].first=arr[i];
         arrPos[i].second=i;
     }

     sort(arrPos,arrPos+n);

     vector<bool>vis(n,false);

     int ans=0;
     for(int i=0;i<n;i++){
         if(vis[i] or arrPos[i].second==i){
             continue;
         }
         else{
             int cycle_size=0;
             int j=i;

             while(!vis[j]){
                 vis[j]=1;
                 j=arrPos[j].second;
                 cycle_size++;
             }

             if(cycle_size>0){
                 ans+=(cycle_size-1);
             }
         }

         
     }
     return ans;

}

int main(){

    int arr[]={2, 8, 5, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
     cout<<solve(arr,n)<<"\n";

}
