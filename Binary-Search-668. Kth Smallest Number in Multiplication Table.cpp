class Solution {
public:
    int findKthNumber(int m, int n, int k) {
      
           int left=1,right=m*n;
        
             int ans;
            while(left<=right){
                
                int mid=left+(right-left)/2;
                
                
                int cnt=0;
                
                for(int i=1;i<=m;i++){
                    
                    cnt+=min(mid/i,n);
                }
                
                
                
                if(cnt>=k){
                    ans=mid;
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
        return ans;
    }
};
