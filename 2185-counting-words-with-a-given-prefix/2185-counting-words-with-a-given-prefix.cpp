class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(pref[j]==words[i][j]){
                    if(j==pref.size()-1){
                        count++;
                        break;
                    }
                }
                else
                    break;      
            }
        }
        return count;
    }
};