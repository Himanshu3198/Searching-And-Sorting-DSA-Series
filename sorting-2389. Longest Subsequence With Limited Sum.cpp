class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        
        int n=nums.size(),m=queries.size();
        sort(nums.begin(),nums.end());
        vector<long long>prefix(n,0);
        vector<int>ans(m,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                
                if(prefix[j]<=queries[i]) ans[i]=j+1;
                else break;
            }
          
        }
        return ans;
        
    }
};
