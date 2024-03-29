class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto x:umap){
            if(x.second>=2){
                return x.first;
            }
        }
        return 0;
    }
};