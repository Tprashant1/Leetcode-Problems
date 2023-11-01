/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        inorder(root->left,ans);
        inorder(root->right,ans);
    }
public:
    vector<int> findMode(TreeNode* root) {
        vector<int>res;
        inorder(root,res);
        unordered_map<int,int>freq;
        int m = 0;
        for(int val :res){
            freq[val]++;
            m = max(m,freq[val]);
        }
        vector<int>ans;
        for(const auto& p:freq){
            if(p.second == m){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};