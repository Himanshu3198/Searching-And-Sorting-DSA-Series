class Solution {
public:
    
    int bs(vector<int>&arr,int &target){
    int start = 0,end=arr.size()-1,ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
 
        // Move to right side if target is
        // greater.
        if (arr[mid] <= target)
            start = mid + 1;
 
        // Move left side.
        else
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }
 
    return ans;
}
    int numMatchingSubseq(string s, vector<string>& words) {
        
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }
        int n=s.size(),res=words.size();
        
          for(auto &s:words){
            int last=-1;
            for(char &c:s){
              int idx=bs(mp[c],last);
              if(idx==-1){
                  res--; 
                  break;
              }
              last=idx;     
            }
        }
        return res;
    }
};
