class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
     
        
          int low=0,high=letters.size();
             int n=letters.size();
          if(letters[n-1]==target) return letters[0];
         while(low<=high){
             
             int mid=low+(high-low)/2;
             
             
             if(letters[mid]>target){
                 high=mid-1;
             }
             else{
                 low=mid+1;
             }
         }
            if(low>=n){
                return letters[0];
            }
        return   letters[low];
    }
};
