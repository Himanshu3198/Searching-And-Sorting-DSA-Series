// 475. Heaters

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        
        sort(heaters.begin(),heaters.end());
        sort(houses.begin(),houses.end());
        
        
        
        int low=0;
        
        int res=0;
        
        
        for(auto nums:houses){
            
        int  high=heaters.size()-1;
            
             low=0;
         
            
            while(high-low>1){
                int mid=(low+high)/2;
                
                if(heaters[mid]>nums){
                    high=mid;
                }
                else{
                    low=mid;
                }
            }
            res=max(res,min(abs(heaters[high]-nums),abs(heaters[low]-nums)));
        }
        
        return res;
    }
};
