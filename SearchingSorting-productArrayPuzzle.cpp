// 238. Product of Array Except Self

#include<bits/stdc++.h>
using namespace std;

void  ProductArray(vector<int>&nums){


        vector<int>left(nums.size());
        
        left[0]=1;
        
        for(int i=1;i<nums.size();i++){
            
            left[i]=left[i-1]*nums[i-1];
        }
        
        
        int right_remain=1;
        
        
        for(int i=nums.size()-2;i>=0;i--){
            
            left[i]=left[i]*nums[i+1]*right_remain;
            
            right_remain=right_remain*nums[i+1];
        }
        
        for(auto it:left){
            cout<<it<<"\n";
        }
}

int main(){
    vector<int>nums={1,2,3,4};

    ProductArray(nums);
}