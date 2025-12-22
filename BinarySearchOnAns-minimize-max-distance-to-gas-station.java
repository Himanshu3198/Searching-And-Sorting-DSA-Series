class Solution {

    private boolean isPossbile(int[] stations, int k,double mid){

        int count =0;
        for(int i=1;i<stations.length;i++){
            count += (int)Math.ceil((stations[i]-stations[i-1])/mid)-1;
        }
        return count <= k;
    }
    public double minmaxGasDist(int[] stations, int k) {
        
        double low = 0,high = 1e8,ans = 0.0,delta = 1e-6;

        while(high-low > 1e-6){

            double mid = low + (high-low)/2;
            if(isPossbile(stations,k,mid)){
                high = mid;
                ans = mid;
            }else{
                low = mid;
            }
        }

        return ans;
    }
}
