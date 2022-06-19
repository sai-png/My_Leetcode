class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>position;
        vector<int>ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                position.push_back(i);
            }
        }
        for(int i=0;i<s.length();i++){ 
        int mn=INT_MAX;
        for(int j=0;j<position.size();j++){
            mn=min(mn,abs(i-position[j]));
        }
             ans.push_back(mn);
        }
        return ans;
    }
};