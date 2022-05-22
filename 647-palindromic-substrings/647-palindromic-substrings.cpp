class Solution {
public:
    int countSubstrings(string s) {
        int begin,end;
        int ans=0;
        for(int i = 0; i < s.size(); i++) {
            begin = i, end = i;
            while(begin >= 0 && end<s.size() && s[begin--]==s[end++]) ans++;
            begin = i - 1, end = i;
            while(begin >= 0 && end<s.size() && s[begin--]==s[end++]) ans++;
        }
        
        return ans;
    }
};