class Solution {
public:
    
    bool isPossible(vector<int>&dist,double &hour,int &mid){
        
        double currHour=0;
        for(int i=0;i<dist.size()-1;i++)
            currHour+=ceil((dist[i]*1.0/mid));
        
        currHour+=(dist.back()*1.0)/mid;
        return currHour<=hour;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int low=1,high=1e7,ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(dist,hour,mid)){
                ans=mid;
                high=mid-1;
            }else
                low=mid+1;
        }
        return ans;
        
    }
};
