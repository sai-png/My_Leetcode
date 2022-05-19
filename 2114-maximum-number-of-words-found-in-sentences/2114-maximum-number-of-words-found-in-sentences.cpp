class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0; int cnt;
        for(auto x: sentences){
            int cnt=(int)count(begin(x),end(x),' ')+1;
         ans=max(ans,cnt);
                 }
        return ans;
    }
};