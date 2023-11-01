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
    unordered_map<int,int>mp;
    int mx=INT_MIN;
    void solve(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        mp[root->val]++;
        mx=max(mx,mp[root->val]);
        if(root->left)
        {
            solve(root->left);
        }
        if(root->right)
        {
            solve(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        solve(root);
        for(auto i:mp)
        {
            if(i.second==mx)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};