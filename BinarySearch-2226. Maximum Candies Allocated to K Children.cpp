2226. Maximum Candies Allocated to K Children
class Solution {
public:
  
    int maximumCandies(vector<int>& candies, long long k) {
        
        
        long long  low=1,high=1e9;
        int ans=0;
        
        auto ok=[&](long long  mid,vector<int>& candies,long long k){
             long long  n=candies.size();
             long long count=0;
             for(auto it:candies){
               count+=(it/mid);
             }
               return (count>=k);
        };
        
        while(low<=high){
            
            long long mid=low+(high-low)/2;
            
            if(ok(mid,candies,k)){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        
        return ans;
    }
};
