// 367. Valid Perfect Square

class Solution {
public:
        int mysqrt(int x) {
        int low = 0,  high = x, mid;
        if(x<2) return x; 
        while(low<high)
        {
            mid = (low + high)/2;
            if(x/mid >= mid) low = mid+1;
            else high = mid;
        }
        return high-1;
        
        
    }
    bool isPerfectSquare(int num) {
        
        int x=mysqrt(num);
        
        if(x*x==num){
            return true;
        }
        
        return false;
    }
};
