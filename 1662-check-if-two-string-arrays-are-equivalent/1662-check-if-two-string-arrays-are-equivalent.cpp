class Solution {
public:
     string add(vector<string>& newword){
         string ans;
         ans="";
         for(auto w:newword) ans+=w;  
         return ans;
     }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return (add(word1)==add(word2)) ;
        
    }
};

