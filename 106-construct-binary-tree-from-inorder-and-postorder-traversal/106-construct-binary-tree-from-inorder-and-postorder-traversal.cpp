class Solution {
public:
    unordered_map<int,int>mpp;
    
    TreeNode *solve(vector<int>&in,vector<int>&post,int &idx,int InS,int InE){
        if(idx<0 || InS > InE)return NULL;
            
         int element=post[idx--];   
         TreeNode*root=new TreeNode(element);
         int InIdx = mpp[element];
        
        root->right=solve(in,post,idx,InIdx+1,InE);
        root->left=solve(in,post,idx,InS,InIdx-1);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int idx=inorder.size()-1;
        
        for(int i=0;i<inorder.size();i++)
            mpp[inorder[i]]=i;
        
        TreeNode *root = solve(inorder,postorder,idx,0,idx);
        return root;
    }
};