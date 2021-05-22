// 350. Intersection of Two Arrays II

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int>mp;
        
        for(auto it:nums1){
            mp[it]++;
        }
        
        vector<int>res;
        
        
        for(auto x:nums2){
            
            if(mp.find(x)!=mp.end()==1 and --mp[x]>=0){
                
                res.push_back(x);
                  
            }
        }
        

     
        return res;
    }
};
