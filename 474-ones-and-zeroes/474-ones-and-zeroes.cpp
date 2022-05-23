
int static dp[602][102][102];
class Solution {
public:
    pair<int,int> countOnesZeros(string s){
        int zeros=0,ones=0;
        for(auto i: s){
            if(i=='0') zeros++;
            if(i=='1') ones++;
        }
        return {zeros,ones};
    }
    int findMax(vector<pair<int,int> > &vec,int size, int m , int n){
        if(size==0 || (m==0 and n==0)){
            return 0;
        }
        if(dp[size][m][n]!=-1){
            return dp[size][m][n];
        }
        if(vec[size-1].first<=m and vec[size-1].second<=n){
            return dp[size][m][n] = max(1+ findMax(vec,size-1,m-vec[size-1].first,n-vec[size-1].second),findMax(vec,size-1,m,n));
        }else{
            return dp[size][m][n] = findMax(vec,size-1,m,n);
        }
        
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int sz = strs.size();
        int mx = 0;
        
        memset(dp,-1,sizeof(dp));
        vector<pair<int,int> > vec;
        for(auto it: strs){
            vec.push_back(countOnesZeros(it));
        }
        return findMax(vec, sz, m,n );
    }
};
