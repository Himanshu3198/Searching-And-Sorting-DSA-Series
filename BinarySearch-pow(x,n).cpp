// 50. Pow(x, n)

class Solution {
public:
    double myPow(double x, int n) {
        long long n1=n;
        double ans=1.0;
        
        if(n1<0) n1=-1*n1;
        
        
        while(n1>0){
            
            
            if(n1%2==0){
                
                x=x*x;
                n1/=2;
            }
            else{
                ans=ans*x;
                n1-=1;
            }
        }
        
        if(n<0) ans=   (double)1.0/ans;
        
        return ans;
    }
};
