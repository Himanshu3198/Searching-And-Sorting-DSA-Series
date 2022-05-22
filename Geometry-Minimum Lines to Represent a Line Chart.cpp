class Solution {
public:
    
    int minimumLines(vector<vector<int>>& stock) {
         int n=stock.size();
        if(n==1) return 0;
         vector<long double> slopes;
         sort(stock.begin(),stock.end());
         int res=1;
        for(int i=0;i<n-1;i++){
            
             long double y= stock[i+1][1]-stock[i][1];
             long double x=stock[i+1][0]-stock[i][0];
             slopes.push_back(y/x);
              
        }
        for(auto it:slopes) cout<<it<<" ";
        for(int i=0;i<slopes.size()-1;i++){
            if(slopes[i]!=slopes[i+1]) res++;
        }
        return res; 
      
    }
};
