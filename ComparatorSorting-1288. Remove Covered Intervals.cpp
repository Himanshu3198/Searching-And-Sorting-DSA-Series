// time complexity O(nlogn)
class Solution {
public:
    
    
   static bool cmp(const vector<int>&v1,const vector<int>&v2){
        
        if(v1[0]==v2[0]){
            return v1[1]>v2[1];
        }
        return v1[0]<v2[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),cmp);

        
        vector<int>vis(n,0);
        
           int res=0;
        for(int i=1;i<n;i++){
            
               for(int j=0;j<i;j++){
                   
                   if(vis[j]) continue;
                int prevFirst=intervals[j][0];
                int prevSecond=intervals[j][1];
            
                int currFirst=intervals[i][0];
                int currSecond=intervals[i][1];
            
                    
            
              if(currFirst>=prevFirst and currSecond<=prevSecond){
                  vis[i]=1;
              }
                   
                   
              }
        }
        
        for(auto it:vis) if(it==0)res++;
            
            return res;
            
        
    }
};
