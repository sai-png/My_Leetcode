class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n, count=0;
        for(int i=0;i<nums.size();i++)
        {
        n=nums[i];
        if((n>9 && n<100) || (n>999 && n<10000) || (n==100000))
        {count++;}
           
            }
   return count;
    }
};
