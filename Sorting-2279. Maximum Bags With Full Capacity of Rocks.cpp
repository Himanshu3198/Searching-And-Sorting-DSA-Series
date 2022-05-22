class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& rocks, int add) {
   
        int n=cap.size();
        vector<int>prefix(n);
        int ans=0; 
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
           pq.push(cap[i]-rocks[i]); 
        }
        while(!pq.empty()){
            int x=pq.top();
            pq.pop();
            if(add<x) break;
            add-=x;
            ans++;
            
        }
        return ans;
    }
};
