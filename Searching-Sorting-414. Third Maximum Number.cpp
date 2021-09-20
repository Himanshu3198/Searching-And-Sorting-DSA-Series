// 414. Third Maximum Number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
     
          long  firstMax=LONG_MIN,secondMax=LONG_MIN,thirdMax=LONG_MIN;
            int n =nums.size();
        
        
        
           for(int i=0;i<n;i++){
               
                 if(nums[i]==firstMax or nums[i]==secondMax or nums[i]==thirdMax) continue;
               
               if(nums[i]>firstMax){
                   
                    thirdMax=secondMax;
                   secondMax=firstMax;
                   firstMax=nums[i];
                   
               }
               
               else if( nums[i]>secondMax){
                   thirdMax=secondMax;
                   secondMax=nums[i];
               }
               
               else if( nums[i]>thirdMax){
                   
                   thirdMax=nums[i];
               }
               
               
           }
        
        
       
        
           return thirdMax==LONG_MIN?firstMax:thirdMax;
    }
};
