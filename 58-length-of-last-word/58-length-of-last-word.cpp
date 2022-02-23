class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                while(s[i]!=' '){
                    count++;
                    if(i==0){
                        break;  
                    }
                 i--; 
                }
                return count;
            }
        }
        return count;
    }
};