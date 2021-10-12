/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
// 374. Guess Number Higher or Lower

class Solution {
public:
    int guessNumber(int n) {
        long long l=1,r=n;
        
        
         while(l<=r){
             
             
                long long mid=(l+r)/2;
        
        
       int res=guess(mid);
        
        if(res==0){
             return mid;
        }
             
            else if(res==-1){
                 
                 r=mid-1;
             }
             else{
                 
                 l=mid+1;
             }
             
         }
        
        return 0;
     
    }
};
