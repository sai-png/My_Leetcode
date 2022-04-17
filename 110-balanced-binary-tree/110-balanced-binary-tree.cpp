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
    
    //calculating height
   int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int h1=height(root->left);
        int h2=height(root->right);
        if(abs(h1-h2) > 1) return false;
        
       return isBalanced(root->left) & isBalanced(root->right);
    }
};