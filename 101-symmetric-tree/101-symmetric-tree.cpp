class Solution {
public:

bool func(TreeNode* le,TreeNode* ri)
{
    if(le==NULL && ri==NULL)
        return true;
    else if(le==NULL || ri==NULL)
        return false;
    else
    {
        if(le->val!=ri->val)
            return false;
    }
    bool a=func(le->left,ri->right);
    bool b=func(le->right,ri->left);
    return a&b;
}
bool isSymmetric(TreeNode* root) 
{   
    return func(root->left,root->right);
}
};