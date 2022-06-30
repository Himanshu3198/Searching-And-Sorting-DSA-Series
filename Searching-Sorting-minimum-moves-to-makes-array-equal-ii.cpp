class Solution {
public:
    int minMoves2(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int res=0,mid=nums.size()/2;
        for(auto it:nums) {
                res+=abs(it-nums[mid]);            
        }
        return res;
    }
};
