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
    void sum_path(TreeNode* root, vector<vector<int>> &ans, vector<int> temp, int x, int targetSum)
    {
        temp.push_back(root->val);

        if(root->left == nullptr && root->right == nullptr)
        {
            if(x == targetSum)
            {
                ans.push_back(temp);
            }
            return;
        }

        if(root->left)
        {
            sum_path(root->left, ans, temp, x + root->left->val, targetSum);
        }

        if(root->right)
        {
            sum_path(root->right, ans, temp, x + root->right->val, targetSum);
        }
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        if(root == nullptr)
        {
            return {};
        }

        vector<vector<int>> ans;
        vector<int> temp;

        sum_path(root, ans, temp, root->val, targetSum);

        return ans;
    }
};