class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int i=left;i<=right;i++)
        {
            bool found = false;
            for(int j=0;j<ranges.size();j++)
            {
                if(i>=ranges[j][0] && i<=ranges[j][1])
                    found = true;
            }
            if(!found)
                return false;
        }
        return true;
    }
};