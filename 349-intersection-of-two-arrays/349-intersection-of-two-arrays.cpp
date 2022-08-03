class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    st.insert(nums1[i]);
                    break;
                }
            }
        }
        vector<int>ans;
        for(auto i=st.begin();i!=st.end();i++){
            ans.push_back(*i);
        }
        return ans;
    }
};