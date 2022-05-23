class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        int x;
        ans.push_back(first);
        for(int i=0;i<encoded.size();i++){
             x=ans[i]^encoded[i];
            ans.push_back(x);
        }
       return ans; 
    }
};