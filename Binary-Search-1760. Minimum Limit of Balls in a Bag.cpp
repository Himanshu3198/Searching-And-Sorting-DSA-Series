class Solution {
public:
    
 /* In this question what we need to find  how many operation will it takes to divide given ball to
    particular weight 
    
      suppose  nums[9]  we want to divide this to minimum weight let say 5 then 
      how many operation will it takes to divide 9 to 5 it will be 1 e.g[5,4]
      let makes it further small  3  it will take 2 operation  [3,6] [3,3,3]
       
       that's why  we use binary search to divide the balls weight to all possible minimum weight
       within given operation*/
    
      bool valid(vector<int>nums,int mid,int op){
          
          int count=0;
          
          
          for(auto v:nums){
             
            if(v>mid){
              
                if(v%mid>0){
                    count+=(v/mid);
                    
                }else{
                  count+=(v/mid-1);
                    
                }
                
                
            }
          }
          return count<=op;
      }
    int minimumSize(vector<int>& nums, int op) {
        
        
            int low=1,high=*max_element(nums.begin(),nums.end());
        
        
            int res=high;
        while(low<high){
            
            int mid=(low+high)/2;
            
            
            if(valid(nums,mid,op)){
                
                res=mid;
                high=mid;
            }else{
                low=mid+1;
            }
        }
        
        return res;
    }
};
