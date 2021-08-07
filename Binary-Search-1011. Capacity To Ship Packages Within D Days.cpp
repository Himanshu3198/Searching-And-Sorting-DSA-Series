1011. Capacity To Ship Packages Within D Days
class Solution {
public:
    
    bool isSafe(int mid,vector<int>&weights,int days){
        
        int count=0;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            
            
            if((sum+weights[i])<=mid){
            sum+=weights[i];
            }
            else{
                sum=0;
                count++;
                i--;
            }
            
        }
            
        
            
             return count+1<=days;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
     
            
        int low=*max_element(weights.begin(),weights.end());
        
     
      int high=  accumulate(weights.begin(),weights.end(),0);
        cout<<high;
        
        int ans=high;
        while(low<=high){
            
            
            int mid=(low+high)/2;
            
            
            if(isSafe(mid,weights,days)==1){
                
                ans=min(ans,mid);
                
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
            
        }
        
        return ans;
        
    
        
    }
};
