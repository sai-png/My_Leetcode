class Solution {
public:
     string add(vector<string>& newword){
         string ans="";
         for(auto w:newword) {
             ans+=w;
         }  
         return ans;
     }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        if(add(word1)==add(word2)) return true;
        return false;
        
    }
};

