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
    void sum_path(TreeNode* root,vector<int> &ans,int x)
    {
        if(root->left==nullptr && root->right==nullptr)
        {
            ans.push_back( x);
            return;
        }
        if(root->left)
        {
            sum_path(root->left,ans,x+root->left->val);
        }
        if(root->right)
        {
            sum_path(root->right,ans,x+root->right->val);
        }

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)
        {
            return false;
        }
        vector<int> ans;
        sum_path(root,ans,root->val);
        for(auto x:ans)
        {
            if(x==targetSum)
            {
                return true;
            }
        }
        return false;


        
    }
};