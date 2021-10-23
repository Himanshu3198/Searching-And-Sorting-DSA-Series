// 154. Find Minimum in Rotated Sorted Array II

class Solution {
public:
    int findMin(vector<int>& nums) {
        
        
       
        
        int low=0 ,high=nums.size()-1;
        
        while(low<=high){
            
            int mid=low+(high-low)/2;
            
            
            if(nums[mid]==nums[high]){
                
                high--;
            }
            
            else if(nums[high]>nums[mid]){
                
                high=mid;
            }
            else{
                
                low=mid+1;
            }
             
        }
        
        return nums[low];
        
        
        
    }
};
