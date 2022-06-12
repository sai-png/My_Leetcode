class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        int i=0,j=0,curr=0,maxi=0;
        while(i<n && j<n){
            if(!s.count(nums[j])){
                s.insert(nums[j]);
                curr+=nums[j];
                maxi=max(maxi,curr);
                j++;
            }
            else{
                curr-=nums[i];
                s.erase(nums[i]);
                i++;
            }
        }
        return maxi;    
    }
};