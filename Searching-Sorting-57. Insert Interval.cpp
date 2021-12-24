class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>>res;
           
          int n=intervals.size();
        
        for(int i=0;i<n;i++){
            
            /* In this case newInterval will insert after current  interval  It
                 means current will inserted first*/
            if(intervals[i][1]<newInterval[0]){
                
                res.push_back(intervals[i]);
            }
            
             /*  In this case newInterval is smaller than current interval so it will
                inserted before the current interval interval and newInterval will be 
                 updated */
            else if(intervals[i][0]>newInterval[1]){
                 res.push_back(newInterval);
                newInterval=intervals[i];
            }
            
            /* This is case when current Interval lies between the newInterval ranges
              So, overlap condition may arrive therefore we will update the 
                 newIntervals value by merging all smaller and greater values*/
            else if(intervals[i][1]>=newInterval[0] or intervals[i][0]<=newInterval[1]){
                
                
                newInterval[0]=min(newInterval[0],intervals[i][0]);
                newInterval[1]=max(newInterval[1],intervals[i][1]);
            }
        }
        
        res.push_back(newInterval);
        
      return res;

        
             
    }
};
