class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int>ans;
        for(int i=0; i<num.size(); i++)
            ans[num[i]]++;
        for(int i=0; i<num.size(); i++){
            char c ='0' + i;
            if(num[i] != '0' + ans[c]){
                return false;
                
                
            }
        }  
        return true;
    }
};