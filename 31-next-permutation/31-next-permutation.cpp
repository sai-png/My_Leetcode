class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1;
    
    for(int i=n-1;i>=0;i--)
    {
       if(nums[i]<nums[i+1])
       {
          // int j=n;
           for(int j=n;j>i;j--)
           {
               if(nums[j]>nums[i])
               {
                   swap(nums[i],nums[j]);
                   sort(nums.begin()+i+1,nums.end());
                   return;
               }
           }
       }
    }
    
    sort(nums.begin(),nums.end());
    
    
}
};
        
 