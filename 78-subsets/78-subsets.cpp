class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums, int i=0) {
        if (i>=nums.size()) {
            return vector<vector<int> > (1, vector<int> {});
        }
        
        vector<vector<int> > subset = subsets(nums, i+1);
        
        int n = subset.size();
        
        for (int j=0; j<n; j++) {
            subset.push_back(subset[j]);
            subset[j].push_back(nums[i]);
        }
        
        return subset;
    }
};