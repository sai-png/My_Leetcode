class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res;

        for (int i = 0, l = 0, r = s.size(); i <= s.size(); i++)
        {
            res.push_back(i == s.size() || s[i] == 'I' ? l++:r--);
        }
        return res;
    }
};