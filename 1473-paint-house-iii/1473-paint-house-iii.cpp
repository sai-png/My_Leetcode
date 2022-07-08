class Solution {
public:
    int dp[101][21][101],inf=INT_MAX;  // dp[i][j][k] is cost of min cost when 'ith' house is 
	                                  //painted in 'jth' color when 'k' no. of cuts remaining
    long long dfs(vector<int>& nums, vector<vector<int>>& cost,int c,int in,int k,int m,int n){
        if(in>=m) return inf;
        if(dp[in][c][k]) return dp[in][c][k];
        long long re =inf;
        if(k==0){  // if no. of cuts remaining is zero, then rest of the houses can be painted into only 1 color
            long long re = 0;
            for(int i = in; i<m;++i){ // find the cost of painting the remaining house 
		                           	//to the expected color, if not possible, return inf
                if(nums[i] && nums[i]!=c){re=inf; break;}
                else if(nums[i]==0) re+=cost[i][c-1];
            }
            return dp[in][c][k]=re;
        }
        if(nums[in] && nums[in]!=c) return dp[in][c][k]=inf; // if the present color is not equal to the expected color return inf
        re = min(re,dfs(nums,cost,c,in+1,k,m,n)); //one possible way is to not cutting at index in
        for(int i = 1; i<=n;++i){  // other possibility is to apply cut at in index,
									//the try all possible color for the next partition except the curr color
            if(i==c) continue;
            re = min(re,dfs(nums,cost,i,in+1,k-1,m,n)); // take min of all
        }
        if(nums[in]==0) re+=cost[in][c-1]; // if current house is not colored in the expected color, 
		                                //add its cost to paint it into expected color
        if(re>=inf) re = inf;
        return dp[in][c][k] = (int)re;
    }
    int minCost(vector<int>& nums, vector<vector<int>>& cost, int m, int n, int target) {
        int re = inf;
        for(int i = 1; i<=n;++i){
            re = min(re,(int)dfs(nums,cost,i,0,target-1,m,n)); 
        }
        if(re>=inf) re=-1;
        return re;
    }
};