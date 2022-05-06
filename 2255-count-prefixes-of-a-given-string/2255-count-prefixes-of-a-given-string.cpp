class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int kount = 0;

        for(auto& word : words){
            if(word.length() > s.length()) continue;
            auto res = std::mismatch(word.begin(), word.end(), s.begin());
            kount += (res.first == word.end());
        }
        return kount;       
    }
};