class RangeFreqQuery {
public:
    
     unordered_map<int,vector<int>>mp;
    RangeFreqQuery(vector<int>& arr) {
        
        
        for(int i=0;i<arr.size();i++){
            
            mp[arr[i]].push_back(i);
        }
    }
    
    int query(int left, int right, int value) {
        
        
          vector<int>&v=mp[value];
        
        
           for(auto it:v){
            cout<<it<<" ";
        }
        cout<<"\n";
        int l=lower_bound(v.begin(),v.end(),left)-v.begin();
        
        
        for(auto it:v){
            cout<<it<<" ";
        }
        int r=upper_bound(v.begin(),v.end(),right)-v.begin();
        
        
        
        
      
        
        return r-l;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
