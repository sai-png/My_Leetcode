class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
int i=0,j=1;
sort(nums.begin(),nums.end());
while(i<n and j<n)
{
if(nums[i]%2==1 and nums[j]%2==0)
{
swap(nums[i],nums[j]);
}
else if(nums[i]%2==0)
{
i+=2;
}
else if(nums[j]%2==1)
{
j+=2;
}
}
return nums;
    }
};