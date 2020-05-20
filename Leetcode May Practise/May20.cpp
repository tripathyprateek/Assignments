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
   void inorder( TreeNode *node, int& k, int& kthSmallest ) {
	if( node->left && k > 0 )
        inorder( node->left, k, kthSmallest );
	if( --k == 0 )
        kthSmallest = node->val;
	if( node->right && k > 0 )
        inorder( node->right, k, kthSmallest );
}
    int kthSmallest(TreeNode* root, int k) {
        int kthSmallest;
        inorder(root,k,kthSmallest);
        return kthSmallest;
        
    }
};
