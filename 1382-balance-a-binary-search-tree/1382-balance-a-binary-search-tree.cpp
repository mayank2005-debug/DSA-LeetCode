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
    void inorder(TreeNode* root, vector<int> &ans)
    {
        if (root == nullptr)
            return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    TreeNode* inorderToBST(int s, int e, vector<int> &inorderVal)
    {
        if (s > e)
            return nullptr;

        int mid = s + (e - s) / 2;

        TreeNode* root = new TreeNode(inorderVal[mid]);

        root->left = inorderToBST(s, mid - 1, inorderVal);
        root->right = inorderToBST(mid + 1, e, inorderVal);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root)
    {
        vector<int> ans;
        inorder(root, ans);

        return inorderToBST(0, ans.size() - 1, ans);
    }
};