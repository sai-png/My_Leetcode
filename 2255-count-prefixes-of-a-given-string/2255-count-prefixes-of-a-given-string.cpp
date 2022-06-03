class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n = words.size();
        int len = s.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<len;j++){
                if(words[i][j]==s[j]){
                    cnt++;
                }
                else break;
            }
            if(cnt==words[i].size()) ans++;
        }
        return ans;
    }
};