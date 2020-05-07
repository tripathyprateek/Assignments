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
//tough one, took quite a lot of time in this

class Solution
{
public:
    void dfs(TreeNode *root, int x, vector<int> &v, int depth)  
    {
        if (!root)
        {
            return;
        }
        if (root->left != NULL)
        {
            if (root->left->val == x)
            {
                v.push_back(root->val);
                v.push_back(depth);
                return;
            }
            dfs(root->left, x, v, depth + 1);
        }

        if (root->right != NULL)
        {
            if (root->right->val == x)
            {
                v.push_back(root->val);
                v.push_back(depth);
            }
            dfs(root->right, x, v, depth + 1);
        }
    }

    bool isCousins(TreeNode *root, int x, int y)
    {
        if (root->val == x || root->val == y)
        {
            return false;
        }
        vector<int> leftv, rightv;
        dfs(root, x, leftv, 0);
        dfs(root, y, rightv, 0);
        if (leftv[0] == rightv[0])
        {
            return false;
        }
        else if (leftv[1] == rightv[1])
        {
            return true;
        }
        return false;
    }
};