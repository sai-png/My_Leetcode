class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                i++;
            }
        }
    }
};