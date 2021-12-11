class Solution {
public:
    #define ll long long int
    
     int gcd(int x,int y){
         
         if(x==0){
             return y;
         }
         return gcd(y%x,x);
     }
    int nthMagicalNumber(int n, int a, int b) {
          
        
        ll low=min(a,b);
        
        ll high= (ll)n*min(a,b);
        
        
        ll lcm= (ll)(a*b)/gcd(a,b);
        
        ll res=high;
        
         while(low<=high){
             
            ll mid=(low+high)/2;
             
             
             ll curr=(mid/a)+(mid/b)-(mid/lcm);
             
             
             if(curr>=n){
                 res=mid;
                 high=mid-1;
             }
             else{
                 low=mid+1;
             }
         }
        ll mod=1e9+7;
        res=res%(mod);
        
        return res;
        
    }
};
