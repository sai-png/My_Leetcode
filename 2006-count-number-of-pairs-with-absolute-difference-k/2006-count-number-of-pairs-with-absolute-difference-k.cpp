class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for (int &num : nums) {
            m[num]++;
        }
        
        int res = 0;
        for (auto& pair : m) {
            if(m.find(pair.first + k) != m.end())
                res += pair.second*m[pair.first + k];
        }
        return res;
    }
};
