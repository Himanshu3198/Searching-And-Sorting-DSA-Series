class Solution {
public:
    
    
    
     bool valid(vector<int>&nums,int mid,int threshold){
         
         
           
             int count=0;
         
         for(auto it:nums){
             
             
             if(it%mid>0){
                 count+=(it/mid+1);
             }else{
                 count+=(it/mid);
             }
         }
         
         return count<=threshold;
         
     }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        
        
        int low=1,high=*max_element(nums.begin(),nums.end());
        
        
        int res=high;
        
        while(low<high){
            
            int mid=(low+high)/2;
            
            
            if(valid(nums,mid,threshold)){
                
                res=mid;
                high=mid;
            }else{
                
                low=mid+1;
            }
        }
        return res;
            
    }
};
