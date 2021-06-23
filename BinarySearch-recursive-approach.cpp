
// 704. Binary Search

class Solution {
public:
    
    
     int solve(vector<int>&nums,int target,int start,int end){
         
         
         if(start>end) return -1;
         
         
         int mid=(start+end)/2;
         
            if(nums[mid]==target){
                return mid;
            }
         
         else if(nums[mid]>target){
             
            return solve(nums,target,start,mid-1);
         }
         else{
             
            return solve(nums,target,mid+1,end);
         }
         
         return -1;
     }
    int search(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size()-1;
        return solve(nums,target,0,n);
    }
};
