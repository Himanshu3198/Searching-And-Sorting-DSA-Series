// 81. Search in Rotated Sorted Array II

class Solution {
public:

    

    bool search(vector<int>& nums, int target) {
        
         
        int low=0,high=nums.size()-1;
        
        
        while(low<high){
            
            
            int mid=(low+high)>>1;
            
            
     if(nums[mid]==target or nums[low]==target or nums[high]==target){
          return true;
     }
            
            if(nums[mid]>nums[high]){
                
                
                if(nums[mid]> target and nums[low]<=target){
                    high=mid;
                }
                else{
                    low=mid+1;
                }
            }
            
            else if(nums[mid]<nums[high]){
                
                if(nums[mid]<target and nums[high]>=target){
                    low=mid+1;
                }
                else{
                    high=mid;
                }
            }
            else{
                high--;
            }
        }
        
      return nums[low]==target?true:false;
    }
};
