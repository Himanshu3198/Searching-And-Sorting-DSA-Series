2294. Partition Array Such That Maximum Difference Is K
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
     
        
         int n=nums.size();
         sort(nums.begin(),nums.end(),greater<int>());
         int res=1;
         int diff=nums[0];
         for(int i=1;i<n;i++){
             
             if(diff-nums[i]>k){
                 res++;
                 diff=nums[i];
             }
         }
         return res;
    }
};
