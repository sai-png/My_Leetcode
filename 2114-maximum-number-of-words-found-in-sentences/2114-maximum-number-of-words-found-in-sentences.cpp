class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=0;
        for(auto i: sentences){
            res=max(res,(int)count(begin(i),end(i),' ')+1);
        }
        return res;
    }
};