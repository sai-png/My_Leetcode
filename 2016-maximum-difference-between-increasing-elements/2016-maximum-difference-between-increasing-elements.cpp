class Solution {
public:
    int maximumDifference(vector<int>& nums) {
       int ans=0,diff=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                diff=nums[j]-nums[i];
                ans=max(ans,diff);
            }
        }
         if (ans==0) return -1;
                else return ans;
        
    }
};