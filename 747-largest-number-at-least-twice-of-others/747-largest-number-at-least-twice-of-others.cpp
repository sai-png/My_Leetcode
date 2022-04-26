class Solution {
public:
    int dominantIndex(vector<int>& ans) {
        vector<int> nums= ans;     
        sort(nums.begin(),nums.end());
        int a= nums[nums.size()-1];
        int x=(a/2);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>x){
                return -1;
            }
        }
         for(int i=0;i<nums.size();i++){
            if(ans[i]==a){
                return i;
            }
        }
        return -1;
    }
};