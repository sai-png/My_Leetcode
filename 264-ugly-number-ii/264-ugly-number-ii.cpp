class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        int two = 0; // Maintain the three pointers i.e. two , three , five
        int three = 0;
        int five = 0;
        
        dp[0] = 1;
        for(int i = 1 ; i < n ; i++){
            int two_multiple = 2 * dp[two];
            int three_multiple = 3 * dp[three];
            int five_multiple = 5 * dp[five];
            
            dp[i] = min(two_multiple , min(three_multiple , five_multiple)); 
            if(dp[i] == two_multiple){
                two++;
            }
            if(dp[i] == three_multiple){
                three++;
            }
            if(dp[i] == five_multiple){
                five++;
            }
        }
        return dp[n - 1];
    }
};