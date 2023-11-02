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
public:
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int l=0;
        queue<TreeNode *>q;
        q.push(root);
    while(!q.empty()){
        l = l+1 ;
        int n = q.size() ;
        while(n--){
            TreeNode * curr = q.front();
            q.pop();
            if(curr->left==NULL && curr->right==NULL){
                return l;
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
    return l;
        
    }
};