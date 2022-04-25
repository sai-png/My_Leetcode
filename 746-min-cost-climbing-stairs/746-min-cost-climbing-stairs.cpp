class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int spend = min(cost[0],cost[1]);
        int n = cost.size();
        vector<int> dp(n,INT_MAX);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 2; i < cost.size(); ++i){
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
    
};