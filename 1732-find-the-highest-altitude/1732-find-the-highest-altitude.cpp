class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans(gain.size()+1);
        gain.push_back(0);
        ans[0]=0;
        for(int i=1;i<gain.size();i++)
        {
            ans[i]=ans[i-1]+gain[i-1];
        }
        int maxi=INT_MIN;
        for(auto i: ans)
        {
            maxi=max(maxi,i);
        }
        return maxi;
    }
    
};