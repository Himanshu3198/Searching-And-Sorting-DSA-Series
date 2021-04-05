// 1356. Sort Integers by The Number of 1 Bits
// time complexity O(nlogn)


#include <bits/stdc++.h>
using namespace std;

static int setBit(int n)
{
    int count = 0;
    while (n > 0)
    {

        n = n & (n - 1);
        count++;
    }
    return count;
}

static bool comp(int a, int b)
{

    int first = setBit(a);
    int second = setBit(b);

    if (first == second && a < b)
    {
        return true;
    }
    else if (first < second)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<int> &arr)
{
 
//         *********************first solution********************
//     sort(arr.begin(), arr.end(), comp);

//     for (auto it : arr)
//     {
//         cout << it << " ";
//     }
}

//   *********************second solution***********************
    vector<int> sortByBits(vector<int>& arr) {
        
      
        int n=arr.size();
        priority_queue<pair<int,int>>maxheap;
        for(int i=0;i<n;i++){
            int count=setBit(arr[i]);
            maxheap.push(make_pair(count,arr[i]));
        }
        vector<int>res;
        while(maxheap.size()>0){
            int num=maxheap.top().second;
            maxheap.pop();
            res.push_back(num);
        }
        reverse(res.begin(),res.end());
        return res;
    }

int main()
{

    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    solve(nums);
    return 0;
}
