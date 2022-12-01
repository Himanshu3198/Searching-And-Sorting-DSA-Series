#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isValid(vector<ll>&a,ll mid,ll c){
 
 ll last=a[0];
 c--;
	for(int i=1;i<a.size();i++){
		  if(c==0) return true;
		  ll diff=a[i]-last;
		  if(diff>=mid){
		   last=a[i];
		   c--;
		  }
	}
	return c==0;
}
void solve(){
	
	ll n,c;
	cin>>n>>c;
	vector<ll>a(n);
	ll sum=0;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	sort(a.begin(),a.end());
	int low=1,high=a[n-1];
	ll ans=0;
	while(low<=high){
		
		ll mid=(low+high)/2;
		
		if(isValid(a,mid,c)) {
			ans=max(ans,mid);
			low=mid+1;
		}
		else high=mid-1;
	}
	cout<<ans<<"\n";
	
	
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
