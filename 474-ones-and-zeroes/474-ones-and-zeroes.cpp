class Solution {
public:
    int dp[101][101][601];
    pair<int,int> checkZeroOne(string s,int m,int n){
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                m--;
            }else{
                n--;
            }
        }
        pair<int,int> p = make_pair(m,n);
        return p;
    }
    int solve(int k,vector<string>& strs,int m,int n){
        if(k==0){
            return 0;
        }
        if(dp[m][n][k]!=-1){
            return dp[m][n][k];
        }
        pair<int,int> p = checkZeroOne(strs[k-1],m,n);
        int remainingM = p.first;
        int remainingN = p.second;
        if(remainingM>=0 && remainingN>=0){
            return dp[m][n][k] = max(1+solve(k-1,strs,remainingM,remainingN) , solve(k-1,strs,m,n));
        }
        else{
            return dp[m][n][k] = solve(k-1,strs,m,n);
        }
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(strs.size(),strs,m,n);
    }
};