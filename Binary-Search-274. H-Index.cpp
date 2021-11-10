class Solution {
public:
    int hIndex(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        
          int low=0,high=nums.size()-1;
             int n=nums.size();
          
            while(low<=high){
                
                
                int mid=low+(high-low)/2;
                
                if(nums[mid]==(n-mid)){
                    
                    return nums[mid];
                }
                
                else if(nums[mid]>(n-mid)){
                    
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        
            return (n-low);
    }
};
