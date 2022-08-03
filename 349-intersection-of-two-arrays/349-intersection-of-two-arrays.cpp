class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> st;        
    for(int itr = 0; itr < nums1.size(); itr++){
        for(int jtr = 0; jtr < nums2.size(); jtr++){
            if(nums1[itr] == nums2[jtr]){
                st.insert(nums1[itr]);
                break;
            }
        }
    }
    
    vector<int> vt;
    for(auto itr = st.begin(); itr != st.end(); itr++){
        vt.push_back(*itr);
    }
    return vt;
}
};