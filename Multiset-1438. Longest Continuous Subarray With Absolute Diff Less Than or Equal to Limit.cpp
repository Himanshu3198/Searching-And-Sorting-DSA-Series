class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
        
        multiset<int>m;
        m.insert(nums[0]);
        int n=nums.size();
        int ans=1,i=0,j=0;
        while(j<n){
            
            if(abs(*m.rbegin()-*m.begin())<=limit){
                
                ans=max(ans,j-i+1);
                j++;
                if(j<n)
                    m.insert(nums[j]);
            }else{
                m.erase(m.find(nums[i]));
                i++;
            }
        }
        return ans;
    }
};
