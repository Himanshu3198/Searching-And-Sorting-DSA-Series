
//  time complexity O(nlong(n))
class Solution {
public:
    
    
  
    bool valid(int mid,vector<int>&time,int totalTrips){
        
            
           for(int i=0;i<time.size();i++){
               
               
                totalTrips-=(mid/time[i]);
               
               if(totalTrips<=0){
                   return true;
               }
              
           }
        
        return  false;
        
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        
          int minele=*min_element(time.begin(),time.end());
          int maxele=*max_element(time.begin(),time.end());
        
          long long low=(long long)minele,high=(long long )minele*totalTrips;
        
         
        
          long long ans=high;
        
        
       int n=time.size();
        
        if(n==1){
            
            return (long long)time[0]*totalTrips;
        }
        
          while(low<high){
           int mid = low + ((high - low) / 2);
              
              
              if(valid(mid,time,totalTrips)){
                  
                  
                  high=mid;
                  ans=mid;
              }else{
                  
                  low=mid+1;
              }
          }
        
        return ans;
    }
};
