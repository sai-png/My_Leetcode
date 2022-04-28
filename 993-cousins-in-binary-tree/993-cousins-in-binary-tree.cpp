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
    unordered_map<int,pair<int,TreeNode*>> mp;
    void helper(TreeNode *root,int level,TreeNode *parent){
        if(root==NULL)
            return;
        if(root->left!=NULL)
            helper(root->left,level+1,root);
        mp[root->val]={level,parent};
        if(root->right!=NULL)
            helper(root->right,level+1,root);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        helper(root,0,root);
        if(mp[x].first==mp[y].first && mp[x].second!=mp[y].second)
            return true;
        return false;
    }
};