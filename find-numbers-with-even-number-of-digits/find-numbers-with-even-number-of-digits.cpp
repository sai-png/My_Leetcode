class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            if((n>9 && n<100)or(n>999 and n<10000)or(n==100000))
            {
                count++;
            }
        }
        return count;
    }
};