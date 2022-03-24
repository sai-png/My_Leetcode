class Solution {
public:
        vector<vector<int>> combine(int n, int k) {
        if(k > n) return {};
        if(k == 0) return {};
        if(k == 1) {
            vector<vector<int> > ret;
            for(int i=0; i<n; i++) {
                ret.push_back({i+1});
            }
            return ret;
        }
        vector<vector<int> > v1 = combine(n-1, k-1);
        vector<vector<int> > v2 = combine(n-1, k);
        
        for(int i=0; i<v1.size(); i++) {
            v1[i].push_back(n);
            v2.push_back(v1[i]);
        }
        
        return v2;
    }
    };