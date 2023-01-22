class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mp;
        vector<int>v;
        for(int i=0;i<score.size();i++){
            v.push_back(score[i][k]);
            mp[score[i][k]]=score[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<v.size();i++){
            ans.push_back(mp[v[i]]);
        }
        return ans;
    }
};
