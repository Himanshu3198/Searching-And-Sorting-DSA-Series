class Solution {

    private boolean validTaste(int[] price,int dist,int k){

        int limit = 1;
        int last = price[0];

        for(int i=1;i<price.length;i++){
            
              int currDist = price[i] - last;
              if(currDist >= dist){
                limit++;
                last = price[i];
              }
              
              if( limit == k) return true;
        }

        return limit >= k;

    }
    public int maximumTastiness(int[] price, int k) {
        
        int n = price.length;
        Arrays.sort(price);

        int low = 0,high = price[n-1],ans = 0;

        while(low <= high){

            int mid = low + (high-low)/2;
            
            if(validTaste(price,mid,k)){
               ans = mid;
               low = mid+1;
            } else{
                high = mid-1;
            }
        }

        return ans;
    }
}
