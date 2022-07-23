class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res;
        string ans;
        for(int i=0;i<words.size();i++){
            string ans=words[i];
            string res=ans;
            reverse(res.begin(),res.end());
            if(ans==res) return ans;
        }
        return "";
    }
};