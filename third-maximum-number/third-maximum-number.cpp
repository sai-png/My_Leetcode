class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        sort(nums.rbegin(),nums.rend());
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1])
            {
                ans.push_back(nums[i]);
            }
        }
        if(ans.size()<3){
            return ans[0];
        }
        else return ans[2];
    }
};