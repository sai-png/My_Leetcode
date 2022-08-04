class Solution {
public:
    int mirrorReflection(int a, int b) {
        while (a % 2 == 0 and b % 2 == 0){ 
            a/=2;
            b/=2;
        }
        int ans=1 - a % 2 + b % 2;
        return ans;
    }
};