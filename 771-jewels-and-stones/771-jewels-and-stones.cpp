class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int ans=0;
        for( char c: s){
            if(j.find(c)!=string::npos)
            ans++;
        }
        return ans;
    }
};