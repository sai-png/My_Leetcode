class Solution {
public:
    
    int maxpro(vector<int>&arr)
    {
        int maxtill=INT_MIN,maxnow=1;
        for(int i=0;i<arr.size();i++)
        {
            maxnow=maxnow*arr[i];
            if(maxnow>maxtill)
            {
                maxtill=maxnow;
            }
            if(maxnow==0)
                maxnow=1;
        }
        maxnow=1;
         for(int i=arr.size()-1;i>=0;i--)
        {
            maxnow=maxnow*arr[i];
            if(maxnow>maxtill)
            {
                maxtill=maxnow;
            }
            if(maxnow==0)
                maxnow=1;
        }
        return maxtill;
    }
    
    int maxProduct(vector<int>& nums) {
        
        return maxpro(nums);
    }
};  
 