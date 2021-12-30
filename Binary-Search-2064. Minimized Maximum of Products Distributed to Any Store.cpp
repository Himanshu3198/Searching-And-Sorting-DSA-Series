class Solution {
public:
    
      bool isValid(vector<int>&nums,int mid,int n){
          
          int count=0;
          
          for(int i=0;i<nums.size();i++){
              
              count+=(nums[i]/mid);
              
              if(nums[i]%mid){
                  count++;
              }
          }
          
          return count<=n;
      }
    int minimizedMaximum(int n, vector<int>& quantities) {
        
        
             int low=1;
             int high=*max_element(quantities.begin(),quantities.end());
        cout<<high;
        while(low<=high){
            
            int mid=(low+high)/2;
            
           if(isValid(quantities,mid,n)){
               
               high=mid-1;
           }else{
               low=mid+1;
           }
        }
        
        return low;
        
    }
};
