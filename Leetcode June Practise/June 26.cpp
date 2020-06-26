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
    //dfs
    int sum;
    int sumNumbers(TreeNode* root) {
         if(!root)
            return 0;
        sum = 0;
        dfs(root,0);
        return sum;
    }
    void dfs(TreeNode* node,int total){
        total = total * 10 + node->val;
        if(!node->left && !node->right )
            sum+=total;
        if(node->left)
            dfs(node->left,total);
        if(node->right)
            dfs(node->right,total);
    }
    
};
