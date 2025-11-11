class Solution {
public:
    bool ok(vector<int>&weights,int days,int w){
        int count=0,sum=0;
        for(int i=0;i<weights.size();i++){
            if(count>days || weights[i]>w) return false;
            sum+=weights[i];
            if(sum>w){
                sum=weights[i];
                count++;
            }
        }
        count++;
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int tot=accumulate(weights.begin(),weights.end(),0);
        int low=1,high=tot,ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(ok(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }else low=mid+1;  
        }
        return ans;
        
    }
};

// python code

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        INF = float('inf')
        low,high = max(weights),sum(weights)
        ans = high

        def can_shipped(mid:int)->bool:
            total_wt = 0
            total_days = 1
            for x in weights:
                if total_wt + x > mid:
                    total_days += 1
                    total_wt = 0
                total_wt += x
            return total_days <= days
        while low <= high:
            mid = (low+high)//2
            if can_shipped(mid):
                high = mid -1
                ans = mid
            else:
                low = mid + 1
        return ans
        
