class Solution {
public:
  
    vector<int> sortArrayByParity(vector<int>& nums) {
        
         int n=nums.size();
         vector<int>res(n);
         int i=0,j=n-1,k=0;
        while( k<n){
            if(nums[k]%2==0){
                res[i++]=nums[k];
            }else{
                res[j--]=nums[k];
            }
            k++;
        }
        return res;
    }
};
