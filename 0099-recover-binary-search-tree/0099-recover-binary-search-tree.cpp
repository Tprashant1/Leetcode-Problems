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
    vector<int>ans;
    int i = 0;
public:
    void inorder(TreeNode* root){
        if(root==NULL){
            return ;
        }
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }

    void chk(TreeNode* root){
        if(root==NULL){
            return;
        }
        chk(root->left);
        if(ans[i]!=root->val){
            swap(ans[i],root->val);
        }
        i++;
        chk(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(ans.begin(),ans.end());
        chk(root);
    }
};