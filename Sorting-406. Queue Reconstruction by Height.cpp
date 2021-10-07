// 406. Queue Reconstruction by Height

class Solution {
public:
    
        static bool comp(vector<int>&a,vector<int>&b){
            
                if(a[0]==b[0]){
                    return a[1]<b[1];
                }
            
            return a[0]>b[0];
        }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& nums) {
     
          sort(nums.begin(),nums.end(),comp);
        
        vector<vector<int>>res;
        
        for(auto it:nums){
            
            for(auto it1:it){
                cout<<it1<<" ";
            }
            cout<<"\n";
        }
        for(int i=0;i<nums.size();i++){
            
            res.insert(res.begin()+nums[i][1],nums[i]);
        }
        
       return res;
    }
};
