class Solution {
public:
    bool match(string word, string pattern){
        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;
        
        for(int i = 0; i < word.length(); i++){
            char w = word[i];
            char p = pattern[i];
            if(mp1.find(w) == mp1.end()){
                mp1[w] = p;
            }
            if(mp2.find(p) == mp2.end()){
                mp2[p] = w;
            }
            if(mp1[w] != p || mp2[p] != w){
                return false;
            }
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(auto word : words){
            if(match(word,pattern)){
                ans.push_back(word);
            }
        }
        
        return ans;
    }
};