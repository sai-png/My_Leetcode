class Solution {
public:
    int longestsub(string word1, string word2){
        int m=word1.size(),n=word2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                   }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
           }
        }
        return dp[m][n];
    }
    int minDistance(string word1, string word2) {
        int x=word1.size();
        int y=word2.size();
        return x+y-2*longestsub(word1,word2);
    }
};