class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>res;
        unordered_map<int,int>mp;
        if(changed.size()%2!=0) return {};
        for(auto v:changed) mp[v]++;
        sort(changed.begin(),changed.end());
        for(auto v:changed){
            int twice=2*v;
            if(v==twice){
                if(mp[v]>=2){
                    res.push_back(v);
                    mp[v]-=2;
                }
                continue;
            }
            if(mp[twice]>0 && mp[v]>0){
                mp[twice]--;
                mp[v]--;
                res.push_back(v);
            }
        }
        if(res.size()!=(changed.size()/2)) return {};
        return res;
    }
};
