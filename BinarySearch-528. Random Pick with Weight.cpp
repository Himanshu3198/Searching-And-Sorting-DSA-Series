class Solution {
public:
      vector<int>nums;
   
    Solution(vector<int>& w) {
     
        nums.resize(w.size());
        nums[0]=w[0];
        
        for(int i=1;i<w.size();i++){
            
            nums[i]=nums[i-1]+w[i];
        }
        
      
       
    }
    
    int pickIndex() {
        int val=rand()%nums[nums.size()-1];
       
        
        
        return upper_bound(nums.begin(),nums.end(),val)-nums.begin();
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
