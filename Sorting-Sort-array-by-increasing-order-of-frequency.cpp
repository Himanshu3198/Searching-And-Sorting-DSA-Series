// 1636. Sort Array by Increasing Frequency

class Solution {
public:
    
static bool comp(pair<int ,int >&a,pair<int,int>&b){
        
           return (a.second==b.second)?a.first>b.first:a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        
        
            vector<int>res;
         map<int,int>mp;
        
        for(auto it:nums){
            mp[it]++;
        }
        
         vector<pair<int,int>>freq;
        for(auto it:mp){
            
            freq.push_back(it);
        }
        
        
        sort(freq.begin(),freq.end(),comp);
        
        
        
        for(auto it:freq){
            
            
            for(int i=0;i<it.second;i++){
                
                res.push_back(it.first);
            }
        }
        
      
        
        
        return res;
    }
};
