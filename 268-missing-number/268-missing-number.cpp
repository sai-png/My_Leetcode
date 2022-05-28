class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int res=0;
        int n=nums.size();
        int sum=(n*(n+1))/2;
        for(auto & x: nums){
           res+=x;
        }
        return sum-res;
    }
};