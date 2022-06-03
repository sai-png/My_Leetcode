class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
       int n=nums.size();
       vector<int> ev;
        vector<int> ans;
        vector<int> od;
       for(int i=0;i<n;i++)
       {
           if(nums[i]%2==0)
               ev.push_back(nums[i]);
           else
               od.push_back(nums[i]);
       }
        int j=0,k=0;
       for(int i=0;i<n;i++)
       {
           if(i%2==0)
           {
               ans.push_back(ev[j]);
               j++;
           }
           else
           {
               ans.push_back(od[k]);
               k++;
           }
       }
        return ans;
        
        
    }
};
