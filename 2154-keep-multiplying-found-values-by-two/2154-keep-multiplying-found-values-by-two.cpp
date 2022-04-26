class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        vector<int>arr(1001,0);
        
        for(int i =0; i<nums.size(); i++){
            arr[nums[i]]++;
        }
        
        while(original <= 1000){
            if(arr[original] ){
                original*=2;
            }
            else{
                break;
            }
        }
        return original;
    }
};
