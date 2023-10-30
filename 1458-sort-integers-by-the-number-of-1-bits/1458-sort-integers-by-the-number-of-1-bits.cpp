class Solution {
public:
int countBit(int n)
    {
        int c= 0;
        while(n > 0)
        {
            n = n & (n - 1);
            c++;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> res;
        for(auto x : arr)
        {
            int count = countBit(x);
            res.push_back({count,x});
        }
        sort(res.begin(),res.end());
        vector<int> ans;
        for(auto x : res)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};