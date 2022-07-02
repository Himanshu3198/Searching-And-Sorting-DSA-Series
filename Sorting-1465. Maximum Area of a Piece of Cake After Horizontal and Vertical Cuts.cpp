#define ll long long int
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        const int mod=1e9+7;
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        ll maxiLen=0,maxiWid=0;
        for(int i=1;i<horizontalCuts.size();i++){
            
            ll curr=horizontalCuts[i]-horizontalCuts[i-1];
            maxiLen=max(maxiLen,curr);
        }
        for(int i=1;i<verticalCuts.size();i++){
            
            ll curr=verticalCuts[i]-verticalCuts[i-1];
            maxiWid=max(maxiWid,curr);
        }
        int ans=(maxiLen*maxiWid)%mod;
        return ans;
    }
};
