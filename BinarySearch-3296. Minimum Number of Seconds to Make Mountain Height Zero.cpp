class Solution {

    
 

    public boolean possibleAns(int mountainHeight,int [] workerTimes, long threshold){
        
        long reduceHeight = 0 ;
        for(int worker:workerTimes){
          long  low = 1, high = mountainHeight;
          while(low <= high){
            
            long mid = (low+high)/2;
            long validCut = (mid*(mid+1))/2*worker;
            if(validCut <= threshold){
                low = mid +1;
            }else {
                high = mid -1;
            }
                
           }
            reduceHeight +=  high;
            if ( reduceHeight >= mountainHeight) return true;
            
        }
        return reduceHeight >= mountainHeight;
    }
    public long minNumberOfSeconds(int mountainHeight, int[] workerTimes) {
        
        
        long low = 1, high = (long)1e18, ans = high;
        while(low <= high){
            
            long mid = (low+high)/2;
            if(possibleAns(mountainHeight,workerTimes,mid)){
                ans = mid;
                high = mid-1;
                
            }else{
                low = mid+1;
            }
        }
        return ans;
        
    }
}
