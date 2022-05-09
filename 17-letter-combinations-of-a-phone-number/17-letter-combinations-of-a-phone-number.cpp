class Solution {
public:
    map <int, vector <char> > m;
    void backtrack(int i, string& p, string& s, vector <string>& vec)
    {
        if (i == p.size()) {
            vec.push_back(s);
            return;
        }
        for (auto ch : m[p[i] - '0']) {
            s += ch;
            backtrack(i + 1, p, s, vec);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits == "" ) return {};
        m[2] = {'a', 'b', 'c'};
        m[3] = {'d', 'e', 'f'};
        m[4] = {'g', 'h', 'i'};
        m[5] = {'j', 'k', 'l'};
        m[6] = {'m', 'n', 'o'};
        m[7] = {'p', 'q', 'r', 's'};
        m[8] = {'t', 'u', 'v'};
        m[9] = {'w', 'x', 'y', 'z'};
        vector <string> vec;
        string s = "";
        backtrack(0, digits, s, vec);
        return vec;
    }
};