class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     set<int>s1;
        set<int>s2;
        vector<int>ans;
        for(auto x: nums1){
            s1.insert(x);
        }
        for(auto x: nums2)
        {
            s2.insert(x);
        }        
        for(auto x: s1){
            if(s2.find(x)!=s2.end()){
                ans.push_back(x);
            }
        }
        return ans;
    }
};
