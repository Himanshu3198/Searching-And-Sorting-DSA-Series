class TopVotedCandidate {
public:
            int candidate=0;
    
           vector<pair<int,int>>candidates;
            int maxCount=0;
            vector<int>count;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        
             
            count.resize(persons.size()+1,0);
           candidates.resize(persons.size());
        
        for(int i=0;i<persons.size();i++){
            
            
            
            count[persons[i]]++;
            
            if(count[persons[i]]>=maxCount){
                
                candidate=persons[i];
                maxCount=count[persons[i]];
            }
            
            
            candidates[i].first=times[i];
            candidates[i].second=candidate;
          }
         
            
               
    }
    
    int q(int t) {
       
        
             int low=0,high=candidates.size();
          
               while(low<high){
                   
                   
                   int mid=low+(high-low)/2;
                   
                   if(candidates[mid].first<=t){
                      low=mid+1;
                   }else{
                       high=mid;
                   }
               }
        
        return candidates[low-1].second;
        
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */
