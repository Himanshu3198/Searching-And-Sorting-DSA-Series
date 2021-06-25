// 493. Reverse Pairs

class Solution {
public:
    
    
    int merge(vector<int>&nums,int low,int mid,int high){
        
        int j=mid+1;
         int initial_j=mid+1;
        int cnt=0;
        for(int i=low;i<=mid;i++){
            while(j<=high and nums[i]>(long)2*nums[j]){
                j++;
            }
         
                        cnt+=(j-initial_j);

        }
        
        vector<int>temp;
        int left=low,right=mid+1;
        while(left<=mid and right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left++]);
            }
            else{
                temp.push_back(nums[right++]);
            }
        }
        
        while(left<=mid){
            temp.push_back(nums[left++]);
        }
        while(right<=high){
            temp.push_back(nums[right++]);
        }
        
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
        return cnt;
    }
    int mergeSort(vector<int>&nums,int low,int high){
        
        if(low>=high) return 0;
        int mid=(low+high)/2;
        
        int count=mergeSort(nums,low,mid);
        count+=mergeSort(nums,mid+1,high);
        count+=merge(nums,low,mid,high);
        
        return count;
        
        
     
    }
    int reversePairs(vector<int>& nums) {
        
        int n=nums.size();
        
        
        
        return mergeSort(nums,0,n-1);
    }
};
