class Solution {
public:
    string add(vector<string>& newword){
        string res="";
        for(auto w:newword)
        res+=w;
        return res;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return add(word1)==add(word2);
        
    }
};