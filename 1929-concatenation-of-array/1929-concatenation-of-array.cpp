class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>V;
        for(int i=0;i<2*n;i++){
            V.push_back(nums[i%n]);
        }
        return V;
    }
};