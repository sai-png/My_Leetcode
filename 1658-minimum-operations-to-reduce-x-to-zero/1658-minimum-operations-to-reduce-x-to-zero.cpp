class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int l = 0;
        int sum = 0, res = 0, maxi = -1,n = nums.size();
        for(int i = 0;i<n;i++)
        {
            sum = sum + nums[i];
        }
        for(int i = 0;i<n;i++) // To calculate length of maximum subarray with 'sum = total sum - x'
        {
            res = res + nums[i];
            while((l<n) && (sum - x < res))
            {
                res = res - nums[l];
                l++;
            }
            if(sum - res == x)
            {
                maxi = max(i - l + 1, maxi);
            }
        }
        if(maxi == -1)
        {
            return -1;
        }
        return n - maxi;
        
    }
};