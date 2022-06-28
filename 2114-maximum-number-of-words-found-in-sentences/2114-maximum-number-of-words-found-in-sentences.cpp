class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=0;
        for(auto i: sentences){
            int ans=(int)count(begin(i),end(i),' ')+1;
            res=max(ans,res);
        }
        return res;
    }
};