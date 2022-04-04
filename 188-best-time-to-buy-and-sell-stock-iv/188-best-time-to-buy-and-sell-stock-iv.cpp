class Solution {
public:
    int solve(vector<int> &p, int idx, int count, bool buy, vector<vector<vector<int>>> &dp, int k){
        if(idx==p.size()){
            return 0;
        }
        if(buy==true && count == k){
            return 0;
        }
        if(dp[idx][count][buy] != -1)
            return dp[idx][count][buy];
        int ans;
        if(buy){
            ans = max(solve(p, idx+1, count, !buy, dp, k) - p[idx], solve(p, idx+1, count, buy, dp, k));
        }
        else{
            ans = max(solve(p, idx+1, count+1, !buy, dp, k) + p[idx], solve(p, idx+1, count, buy, dp, k));
        }
        return dp[idx][count][buy] = ans;
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(), vector<vector<int>> (k, vector<int> (2, -1)));
        int res = solve(prices, 0, 0, true, dp, k);
        return res;
    }
};