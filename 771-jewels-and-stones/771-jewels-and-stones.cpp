class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int count =0;
        for(char x: s){
            if(j.find(x)!=string::npos)
                count++;
        }
        return count;
    }
};