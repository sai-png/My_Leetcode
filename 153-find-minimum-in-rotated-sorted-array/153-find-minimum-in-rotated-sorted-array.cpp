class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()>=1 && nums[nums.size()-1]>=nums[0]){
            return nums[0];
        }
        int i=nums.size()-1;
        while((i-1)>=0 && nums[i-1]<nums[i]){
            i--;
        }
        return nums[i];
    }
};