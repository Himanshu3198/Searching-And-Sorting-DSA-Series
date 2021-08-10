912. Sort an Array
class Solution {
public:
    
    void merge(vector<int>&nums,vector<int>&left,int leftcount,vector<int>right,int rightcount){
        
        int i=0,j=0,k=0;
        
         while(i<leftcount and j<rightcount){
             
             if(left[i]<right[j]){
                 
                 nums[k]=left[i];
                 i++;
                 k++;
             }
             else{
                 nums[k]=right[j];
                 j++;
                 k++;
             }
         }
        
        
        while(i<leftcount){
            
            nums[k++]=left[i++];
        }
        
        while(j<rightcount){
            nums[k++]=right[j++];
        }
    }
    
    void mergeSort(vector<int>&nums,int n){
        
        
        if(n<2){
            return;
        }
        int mid=n/2;
        
        vector<int>left(mid);
        vector<int>right(n-mid);
        
        for(int i=0;i<mid;i++){
            
            left[i]=nums[i];
        }
        
        for(int i=mid;i<n;i++){
            
            right[i-mid]=nums[i];
        }
        
        mergeSort(left,mid);
        mergeSort(right,n-mid);
        merge(nums,left,mid,right,n-mid);
    }
    vector<int> sortArray(vector<int>& nums) {
        
        
        
          int n=nums.size();
        
        
          mergeSort(nums,n);
        
        return nums;
        
    }
};
