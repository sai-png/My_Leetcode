class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        set<int> st;
        
        for (int i=0; i<nums.size(); i++) {
            st.insert(nums[i]);
        }

        for (int i=1; i<=nums.size();i++) {
            if (st.find(i) == st.end()) {
                res.push_back(i);
            }
        }
        return res;
    }
};