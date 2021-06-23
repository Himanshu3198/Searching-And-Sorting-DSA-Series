// 852. Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
     
           int low=0,high=arr.size()-1;
        
        
        while(low<high){
            
            int mid1=(low+high)/2;
            
            int mid2=mid1+1;
            
            if(arr[mid1]<arr[mid2]){
                
                low=mid2;
            }
            else{
                high=mid1;
            }
        }
        return low;
    }
};
