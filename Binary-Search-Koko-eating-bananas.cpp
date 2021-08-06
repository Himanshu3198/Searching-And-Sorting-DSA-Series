class Solution {
public:
    
    /* problem in  this we have to choose min no of banana's eat per hours so that all 
    banana's eaten within given deadline hour
    As we knew the answer range will be between the 1 to max no of bananas in given piles
    So we weill check for all the  possible minimum value within this range .if we solve it iteratively then time compexity 
    will be (max_val*size of piles) we can improve it using binary search*/
    
    bool isValid(int mid,vector<int>&piles,int h){
        
        
        int count=0;
        
        for(int i=0;i<piles.size();i++){
            
            if(piles[i]%mid){
                
                count+=(piles[i]/mid)+1;
            }
            else{
                count+=(piles[i]/mid);
            }
        }
        return count<=h;
        
    }
        
    
    int minEatingSpeed(vector<int>& piles, int h) {
     
        
          int low=1,high=*max_element(piles.begin(),piles.end());
        
        
        int ans=high;
        while(low<=high){
            
            
            int mid=(low+high)/2;
            
            
            if(isValid(mid,piles,h)==1){
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
