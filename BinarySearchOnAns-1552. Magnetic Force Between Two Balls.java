class Solution {
    
    private boolean validForce(int [] position,int force,int m){

        int  balls = m;
        int lastPos = position[0];
        balls = balls-1;


        for(int i=1;i<position.length;i++){

           int currPos = position[i] - lastPos;
           if(currPos >= force){
               balls = balls-1;
               lastPos = position[i];
           }
        }

        return balls <= 0;
    }
    public int maxDistance(int[] position, int m) {
        
       Arrays.sort(position);

        int low = 1,high = Integer.MAX_VALUE,ans=1;

        while(low <= high){

            int mid = low + (high-low)/2;

            if(validForce(position,mid,m)){
                    ans = mid;
                    low = mid+1;  
            }else{
                high = mid-1;
            }
        }

        return ans;
    }
}
