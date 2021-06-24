// 462. Minimum Moves to Equal Array Elements II

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        
        int n=nums.size();
        
        int total=0;
        
        sort(nums.begin(),nums.end());
        
      if(n&1){
          
          int k=nums[n/2];
          
          
          for(int i=0;i<n;i++){
              
              total+=abs(k-nums[i]);
          }
          
          return total;
          
          
          
      }
        
        else{
            
            
            int k=nums[n/2];
            int m=nums[(n/2)-1];
            
            
            int total1=0,total2=0;
            
            for(int i=0;i<n;i++){
                total1+=abs(k-nums[i]);
                total2+=abs(m-nums[i]);
            }
            
            return min(total1,total2);
        }
    }
};
