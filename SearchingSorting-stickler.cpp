// time complexity o(n)

// Maximum Sum Non Adjacent Elements Dynamic Programming | Greedy Approach

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


 // } Driver Code Ends

// Function to return maximum of sum without adjacent elements

int max(int a,int b){
    
   return (a>b)?a:b;
}

ll FindMaxSum(ll a[], ll n)
{
    // Your code here
     int inc=a[0];
     int exc=0;
     for(int i=1;i<n;i++){
         
         int newinc=exc+a[i];
         int newexc=max(inc,exc);
         
         inc=newinc;
         exc=newexc;
     }
     
     return max(inc,exc);
}


// { Driver Code Starts.

int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		ll n;
		cin>>n;
		ll a[n];
		
		//inserting money of each house in the array
		for(ll i=0;i<n;++i)
			cin>>a[i];
			
		//calling function FindMaxSum()
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}
