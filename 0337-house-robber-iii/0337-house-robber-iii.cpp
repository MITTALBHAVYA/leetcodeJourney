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
    pair<int,int>helper(TreeNode* root){
        if(root==NULL){
            return {0,0};
        }
        pair<int,int>left1  = helper(root->left) ;
        pair<int,int>right1 = helper(root->right);
        int with    = root->val + left1.second + right1.second ;
        int without = max(left1.first,left1.second) + max(right1.first,right1.second);
        return {with,without};
    }
    int rob(TreeNode* root) {
        pair<int,int>ans=helper(root);
        return max(ans.first,ans.second);
    }
};