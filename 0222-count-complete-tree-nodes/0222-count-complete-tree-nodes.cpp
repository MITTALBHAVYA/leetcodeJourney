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
    int solve(TreeNode* node){
        if(node==NULL)
        {
            return 0;
        }
        else
        {
            return 1+solve(node->left)+solve(node->right);
        }
    }
    int countNodes(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            return 1+solve(root->left)+solve(root->right);
        }
    }
};