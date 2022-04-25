class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3) return n;
        int d = n / 2, m = n % 2;
        return climbStairs(d) * climbStairs(d + m) + climbStairs(d - 1) * climbStairs(d + m - 1);
    };
};
