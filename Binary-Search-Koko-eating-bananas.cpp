class Solution {
public:
    
//      we need to find minimum speed at which koko can finish all bananas within h hours
    
    bool valid(int mid,int h,vector<int>&nums){
        
        
        int time=0;
        
    for(int i=0;i<nums.size();i++){
        
        
        if(nums[i]%mid){
            
            time+=(nums[i]/mid +1);
        }else{
            
            time+=(nums[i]/mid);
        }
        
   
    }
            return time<=h;
    }
        
        
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
        
        int low=1;
        
        int high=*max_element(piles.begin(),piles.end());
        
        
        int ans=high;
        while(low<high){
            
            
            int mid=(low+high)/2;
            
            
            if(valid(mid,h,piles)){
                
                high=mid;
                ans=mid;
            }else{
                
                low=mid+1;
            }
              
            
        }
        
        return ans;
    }
};
