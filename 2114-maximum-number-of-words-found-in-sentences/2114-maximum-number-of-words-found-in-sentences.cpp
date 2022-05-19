class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(auto x: sentences){
         ans=max(ans,(int)count(begin(x),end(x),' ')+1);
                 }
        return ans;
    }
};