     when array is rotated then two possiblities are
       low to mid part is sorted 
       a) if the target lies btw  this part  ` (target>= nums[low] and target<=nums[mid])` 
       then `high=mid-1;`
       
       b) else target will be present after the mid `low=mid+1;`
	   
        mid to high part is sorted
       a)  if the target lies btw this part` (target>=nums[mid] and target<=nums[high])`
           then `low=mid+1;`
       b) else target will be present before the mid `high=mid-1`
class Solution {
public:
               
    int search(vector<int>& nums, int target) {
        
        
        
          int low=0,high=nums.size()-1;
        
          
        while(low<=high){
            
            int mid=(low+high)/2;
            
            if(nums[mid]==target) return mid;
           
            if(nums[low]<=nums[mid]){
                
                if(target>=nums[low] and target<=nums[mid]){
                     high=mid-1;
                  }else{
                    low=mid+1;
                }
                
            }else if(nums[mid]<=nums[high]){
               
                if(target>=nums[mid] and target<=nums[high]){
                    
                    low=mid+1;
                }else{
                    
                    high=mid-1;
                }
                
            }
        }
        
        return -1;
    }
};
