class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            string res=to_string(nums[i]);
            int ans=res.size();
            if(ans%2==0)
            {
                count++;
            }
        }
       return count; 
    }
};