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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root == NULL)
            return {};

        queue<pair<TreeNode*, pair<int,int>>> q;
        vector<vector<int>> ans;
        map<int, vector<pair<int,int>>> mp;

        q.push({root,{0,0}});

        while(!q.empty())
        {
            pair<TreeNode*, pair<int,int>> pr = q.front();
            q.pop();

            int row = pr.second.first;
            int col = pr.second.second;

            mp[col].push_back({row, pr.first->val});

            if(pr.first->left)
                q.push({pr.first->left,{row+1,col-1}});

            if(pr.first->right)
                q.push({pr.first->right,{row+1,col+1}});
        }

        for(auto x : mp)
        {
            vector<int> temp;

            sort(x.second.begin(), x.second.end());

            for(auto node : x.second)
            {
                temp.push_back(node.second);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};