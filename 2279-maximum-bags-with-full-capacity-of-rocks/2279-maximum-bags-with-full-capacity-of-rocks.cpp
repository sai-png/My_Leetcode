class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
       int count=0;
        for(int i=0;i<capacity.size();i++)
        {
            capacity[i]-=rocks[i];
            
        }
        sort(capacity.begin(),capacity.end());
        for(int i=0;i<capacity.size();i++)
        {
            if(additionalRocks==0||additionalRocks<capacity[i])
            {
                break;
            }
            if(capacity[i]==0)
            {
                count++;
            }
            else if(additionalRocks>=capacity[i])
            {
                additionalRocks-=capacity[i];
                count++;
            }
            
        }
        return count;  
    }
};