class Solution {
public:
    void solution(string s,vector<int>&pos,int start,vector<string> &res){
        if(start==pos.size()) {
            res.push_back(s);
            return;}
                s[pos[start]]=toupper(s[pos[start]]);
                solution(s,pos,start+1,res);
                s[pos[start]]=tolower(s[pos[start]]);
                solution(s,pos,start+1,res);
             
    }
    vector<string> letterCasePermutation(string s) {
        vector<int>pos;
        vector<string> res;
        for(int i=0;i<s.length();i++){
            if((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')){
                pos.push_back(i);
           }
        }
        solution(s,pos,0,res);
        return res;
    }
};