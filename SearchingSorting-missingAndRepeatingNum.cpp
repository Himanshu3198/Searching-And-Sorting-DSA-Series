#include<bits/stdc++.h>
using namespace std;

void  find_Missing_And_Repeating_Number(int arr[],int n){
    bool checked[n+1]={false};
    int missing,repeating;
    for(int i=0;i<n;i++){
        if(checked[arr[i]]==true){
            repeating=arr[i];
        }
        else{
            checked[arr[i]]=true;
        }
    }

    for(int i=1;i<=n;i++){
        if(checked[i]==false){
            missing=i;
            break;
        }
    }

    cout<<repeating<<" "<<missing<<"\n";
}

int main(){
    int arr[]={2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    find_Missing_And_Repeating_Number(arr,n);
}