class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
        int n=tiles.size();
        sort(tiles.begin(),tiles.end());
        vector<int>prefix(n,0);
        
        for(int i=0;i<n;i++){
            
             prefix[i]=tiles[i][1]-tiles[i][0]+1;
            if(i>0)   prefix[i]+=prefix[i-1];
        }
        int ans=0;
        vector<int>nums(n);
        for(int i=0;i<n;i++) nums[i]=tiles[i][0];
        for(int i=0;i<n;i++){
            
            int j=upper_bound(nums.begin(),nums.end(),nums[i]+carpetLen)-nums.begin();
            j--;
            int fullCover=0;
            if(j>i){
                fullCover+=prefix[j-1];
                if(i>0) fullCover-=prefix[i-1];
            }
            
            int partialCover=0;
            if(carpetLen+nums[i]>tiles[j][1]) partialCover=tiles[j][1]-tiles[j][0]+1;
            else partialCover=nums[i]+carpetLen-nums[j];
            int currAns=fullCover+partialCover;
            ans=max(ans,currAns);
            
             
        }
        return ans;
        
    }
};
