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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==nullptr)
        {
            return {};
        }
        vector<int> ans;
        vector<int> left;
        vector<int> right;
        left=inorderTraversal(root->left);
        ans=left;
        ans.push_back(root->val);
        right=inorderTraversal(root->right);
        for(int i=0;i<right.size(); i++)
        {
            ans.push_back(right[i]);
        }
        return ans;
        
    }
};