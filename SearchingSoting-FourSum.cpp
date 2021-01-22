
// Time complexity is O(n^3)
// Find All Four Sum Numbers
// Given an array of integers and another number. Find all the unique quadruple 
// from the given array that sums up to the given number.

#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > fourSum(vector<int> &a, int k);

// Position this line where user code will be pasted.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int> > ans = fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

// arr[] : int input array of integers
// k : the quadruple sum required
vector<vector<int> > fourSum(vector<int> &arr, int target) {
    // Your code goes here
    vector<vector<int> > res;   
    set<vector<int>> s;
    sort(arr.begin(),arr.end());
    
    int n=arr.size();
    
    for(int i=0;i<=n-4;i++)
    {
        for(int j=i+1;j<=n-3;j++)
        {

            
            int left=j+1;
            int right=n-1;
            
            while(left<right)
            {
                int sum=arr[i]+arr[j]+arr[left]+arr[right];
                
                if(sum==target)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[left]);
                    temp.push_back(arr[right]);
                    left++;
                    right--;
                    s.insert(temp);
                }
                
                else if(sum<target)
                left++;
                
                else right--;
            }
        }
    }
    
    set<vector<int>>::iterator itr;
    
    for(itr=s.begin();itr!=s.end();itr++)
    res.push_back(*itr);
    
    return res;
}


