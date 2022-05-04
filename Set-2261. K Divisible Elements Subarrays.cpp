static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();

class Solution
{
public:
    int countDistinct(vector<int> &nums, int k, int p)
    {
       /*time complexity O(n*n+log(n))
         space complexity o(n*n)
         */
        int n = nums.size(), total = 0;
        set<string> st;
        int count;
        for (int i = 0; i < n; i++)
        {
            string str="";
            count = 0;
            for (int j = i; j < n; j++)
            {
                int x = nums[j];
                if (x % p == 0)
                    count++;
                if (count > k)
                {
                    break;
                }
                 str+=(x+'0');
                if (count <= k)
                {
                    if (!st.count(str))
                    {
                        total++;
                        st.insert(str);
                    }
                }
            }
        }

        return total;
    }
};
