// K-th element of two sorted Arrays 
// Expected Time Complexity: O(Log(N) + Log(M))
// Expected Auxiliary Space: O(Log (N))
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kthElement(int a[], int b[], int n, int m, int k)
    {
        if (n > m)
        return kthElement(b, a, m, n, k);
        if (n == 0)
        return b[k - 1];
        if (k == 1)
        return min( a[0], b[0]);
        int i = min( k / 2, n), j = min( k / 2, m);
        if (a[i - 1] > b[j - 1])
        return kthElement(a, b + j, n, m - j, k - j);
        else
        return kthElement(a + i, b, n - i, m, k - i);
    }
};


int main()
{
	int t=1;
	// cin>>t;
	while(t--){
		int n=5,m=4,k=5;
		// cin>>n>>m>>k;
		int arr1[n]={2, 3, 6, 7, 9},arr2[m]={1, 4, 8, 10};
		// for(int i=0;i<n;i++)
		// 	cin>>arr1[i];
		// for(int i=0;i<m;i++)
		// 	cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  