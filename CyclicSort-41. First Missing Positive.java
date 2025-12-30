class Solution {
    public int firstMissingPositive(int[] nums) {
        
        int n = nums.length;

        // 1.apply cyclic sort as we ans would be in range [1,n+1]  
        // 2. check if i+1 == nums[i] if not return i+1 or n+1
    
        // cyclic sort
        for(int i=0;i<n;i++){

            while(nums[i] >=1 && nums[i]<=n && nums[i]!=nums[nums[i]-1]){

                 int correctIdx = nums[i]-1;
                 int temp = nums[i];
                 nums[i] = nums[correctIdx];
                 nums[correctIdx] = temp; 
            }
        } 

        // check if i+1 == nums[i]

        for(int i=0;i<n;i++){

            if(nums[i] !=(i+1)) return i+1;
        }

        // if all are present then answer should be n+1 because it is first smallest missing
        return n+1;
    }
}
