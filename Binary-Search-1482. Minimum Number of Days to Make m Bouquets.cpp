// 1482. Minimum Number of Days to Make m Bouquets

class Solution {
public:
    
    bool isSafe(int mid,vector<int>&nums,int k,int m){
        
        
        int count=0;
        int cnt=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]<=mid){
                cnt++;
            }
            else{
                cnt=0;
                
            }
            if(cnt==k){
                count++;
                cnt=0;
            }
        }
        
        return count>=m;
    }
    int minDays(vector<int>& nums, int m, int k) {
        
        int low=1,high=*max_element(nums.begin(),nums.end());
        
        
        int ans=high;
        int days=m*k;
        
        if(nums.size()<days){
            
            return -1;
        }
    
        while(low<=high){
            
            int mid=(low+high)/2;
            
            
            if(isSafe(mid,nums,k,m)){
                
                high=mid-1;
                ans=min(ans,mid);
            }
            else{
                low=mid+1;
             
            }
            
            
        }
        
        return ans;
    }
};
