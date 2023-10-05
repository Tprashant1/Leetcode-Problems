class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int num:nums)
        {
            m[num]++;
        }
        for(auto i = m.begin(); i != m.end(); i++){
            if(i->second * 3 > nums.size()){
                ans.push_back(i->first);
            }
        }
        return ans;

    }
};