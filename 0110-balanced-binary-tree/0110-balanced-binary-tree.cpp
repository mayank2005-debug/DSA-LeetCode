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
     int maxDepth(TreeNode* root) {
        if(root==nullptr)
        {
            return 0;
        }
        int height_left=maxDepth(root->left);
        int height_right=maxDepth(root->right);
        return  1+max(height_left,height_right);
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
        {
            return true;
        }
       
        if((abs(maxDepth(root->left)-maxDepth(root->right))<=1) && isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
        }
        else return false;
    }
};