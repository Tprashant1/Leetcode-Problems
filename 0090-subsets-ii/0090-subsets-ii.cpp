class Solution {
private:
void solve(vector<int>& nums,vector<int>&res,int index,vector<vector<int>>&ans){
    if(index>=nums.size()){
        if(find(ans.begin(),ans.end(),res) == ans.end()){
            ans.push_back(res);
        }
        return;
    }

    
    res.push_back(nums[index]);
    solve(nums,res,index+1,ans);
    res.pop_back();

    solve(nums,res,index+1,ans);
    

}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        int index = 0 ;
        sort(nums.begin(),nums.end());
        solve(nums,res,index,ans);
        return ans;
    }
};