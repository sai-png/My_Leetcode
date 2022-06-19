class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string ss) {
        vector<vector<string>> ans;
        sort(p.begin(), p.end());
        string res="";
        for(char s : ss) {
            res+=s;
            auto it = lower_bound(p.begin(), p.end(), res);
            vector<string> words;
            for(int i=0; i<3 and it+i!=p.end();i++){
                string &temp=*(it+i);
                if(temp.find(res))break;
                words.push_back(temp);
            }
            ans.push_back(words);
        }
        return ans;
    }
};