class Solution {
private:
void solve(vector<int>& nums,vector<int>res,int index,vector<vector<int>>&ans){
    if(index >= nums.size()){
        ans.push_back(res);
        return;
    }
    //exclude;
    solve(nums,res,index+1,ans);
    //include;
    int element = nums[index];
    res.push_back(element);
    solve(nums,res,index+1,ans);


}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res ;
        int index = 0;
        solve(nums,res,index,ans);
        return ans;
    }
};