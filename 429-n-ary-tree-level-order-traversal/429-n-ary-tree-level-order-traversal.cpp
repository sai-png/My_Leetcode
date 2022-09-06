class Solution { // 16 ms, faster than 98.53%
public:
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(Node* root) {
        dfs(root, 0);
        return ans;
    }
    void dfs(Node* root, int level) {
        if (root == nullptr) return;
        if (level == ans.size()) ans.emplace_back(); // Need more level -> Add new level
        ans[level].push_back(root->val);
        for (Node* child : root->children)
            dfs(child, level + 1);
    }
};