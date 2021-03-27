class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // two pointer 
           sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1 = (int)nums1.size(), n2 = (int)nums2.size();
        int i1 = 0, i2 = 0;
        vector<int> nums;
        while(i1 < n1 && i2 < n2){
            if(nums1[i1] == nums2[i2]) {
                nums.push_back(nums1[i1]);
                i1++;
                i2++;
            }
            else if(nums1[i1] > nums2[i2]){
                i2++;
            }
            else{
                i1++;
            }
        }
        
        
        //removing duplicate
      
        
         int p1,p2=0;
        
        if(nums.size()>0){
            
              for(int p1=1;p1<nums.size();p1++){

        if(nums[p1]!=nums[p2]){
            p2++;
            nums[p2]=nums[p1];
        }
    } 
          nums.resize(p2+1);
            
        }
  
        return nums;
        
    }
};
