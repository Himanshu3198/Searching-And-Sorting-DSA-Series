class Solution {
public:
      /* the idea is to make vector pair of start time and index  and then check
         is there any start time greater than equal to current interval end time if yes
         then push its position into the vector else push -1 into the vector*/
    
           int binarySearch(vector<pair<int,int>>&nums, int key){
               
               
               int low=0,high=nums.size()-1;
               int val=nums.size();
               
               while(low<=high){
                   
                   int mid=(low+high)/2;
                   
                   if(nums[mid].first>=key){
                       
                       high=mid-1;
                       val=nums[mid].second;
                   }
                   else{
                       low=mid+1;
                   }
               }
               
               return val;
           }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
        vector<pair<int,int>>nums;
        vector<int>res;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            
            nums.push_back({intervals[i][0],i});
        }
        
        
        sort(nums.begin(),nums.end());
        
        
            for(int i=0;i<n;i++){
                
                int val=intervals[i][1];
                
                  int pos=binarySearch(nums,val);
                
                if(pos==n){
                    res.push_back(-1);
                }else{
                    
                    res.push_back(pos);
                }
            }
        
        return res;
        
        
        
    }
};
