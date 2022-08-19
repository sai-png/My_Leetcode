class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i: nums)
            freq[i]++;
        unordered_map<int, int> sublast;
        for(int i=0; i< nums.size();i++){
            if(freq[nums[i]]==0) continue;
            
            if(sublast[nums[i]-1]>0){
                freq[nums[i]]--;
                sublast[nums[i]-1]--;
                sublast[nums[i]]++;
              
            }
            else if(freq[nums[i]+1]>0 && freq[nums[i]+2]>0)
            {   freq[nums[i]]--;
                freq[nums[i]+1]--;
                freq[nums[i]+2]--;
                sublast[nums[i]+2]++;
              
            }
            
            
            
            
            else
                return false;
        }
        return true;
    }
};