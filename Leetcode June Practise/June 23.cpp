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
     int countNodes(TreeNode* root) {

        if(!root) 
            return 0;
        TreeNode *leftnode=root, *rightnode=root;
        int lh=0, rh=0;
        while(leftnode){
            lh++;
            leftnode = leftnode->left;
        }

        while(rightnode){
            rh++;
            rightnode = rightnode->right;
        }

        if(lh==rh)
            return pow(2,lh)-1;

        return 1+countNodes(root->left)+countNodes(root->right);

    }

};
