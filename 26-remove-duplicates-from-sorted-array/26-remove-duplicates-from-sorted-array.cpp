class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=1;
        for(int i=0;i<nums.size()-1;i++)
        {
           if(nums[i]!=nums[i+1])
           {
               nums[ans]=nums[i+1];
               ans++;
           }
        }
   return ans;
    }
};