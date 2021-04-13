#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      sort(a,a+n);
      int b[n+1];
      b[0]=0;
      for(int i=1;i<=n;i++){

          b[i]=b[i-1]+a[i-1];
      }
    int q;
    cin>>q;
    while(q--){
        int p;
        cin>>p;
  
        int index=upper_bound(a,a+n,p)-a;
        cout<<index<<" "<<b[index]<<"\n";
    }
    return 0;
}