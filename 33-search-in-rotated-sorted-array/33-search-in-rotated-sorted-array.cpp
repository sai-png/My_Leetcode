class Solution {
public:
    
    
    int bin(vector<int> nums,int lo,int hi,int target)
    {
        int mid;
        while(lo<=hi)
        {
            mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
                hi=mid-1;
            if(nums[mid]<target)
                lo=mid+1;
        }
        return -1;
    }
    int find_lo(vector<int > nums)
    {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int mid;
        
        while(lo<hi)
        {
            
            mid=lo+(hi-lo)/2;
            if(nums[0]>nums[mid])
                hi=mid;
            else
                lo=mid+1;
            
        }
        if(nums[0]<nums[lo])
            return 0;
        else
            return lo;
        
    }
    
    int search(vector<int>& nums, int target) {
        int index;
        int n=nums.size();
        index=find_lo(nums);
        if(index==0)
            return bin(nums,0,n-1,target);
        int left=bin(nums,0,index-1,target);
        if(left!=-1)
            return left;
        int right=bin(nums,index,n-1,target);
        return right;
            
    }
};