class Solution {
public:
    
 
    int maximumBeauty(vector<int>& nums, int k) {
        
        
         int n=nums.size(),ans=0;
         sort(nums.begin(),nums.end());
         for(int i=0;i<n;i++){
             
             int idx=upper_bound(nums.begin(),nums.end(),nums[i]+2*k)-nums.begin();
             ans=max(ans,idx-i);
             
         }
        return ans;
    }
};
static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
