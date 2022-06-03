class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
        }
            int j=0;
            int k=0;
            for(int i=0;i<nums.size();i++){
                if(i%2==0){
                    ans.push_back(pos[j]);
                    j++;
                }
                else{
                    ans.push_back(neg[k]);
                    k++;
                }
            }
 return ans;
        
    }
};
 