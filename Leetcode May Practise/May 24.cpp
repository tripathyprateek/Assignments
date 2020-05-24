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
private:
    void search(TreeNode* root, int num)
    {
        if(num < root->val)
        {
            if(root->left == NULL)
            {                
                root->left = new TreeNode(num);                
            } 
            else 
            {
                search(root->left, num);
            }
        } 
        else
        {
            if(root->right == NULL)
            {                
                root->right = new TreeNode(num);                
            }
            else
            {
                search(root->right, num);
            }
        }
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        if(n == 0) {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[0]);          
        for(int i = 1; i < n; i++) {
            int num = preorder[i];
            search(root, num);
        }
        return root;
    }
};
