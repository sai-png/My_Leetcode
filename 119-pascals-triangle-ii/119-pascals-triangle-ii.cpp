class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> vec;
        
        for (int i = 1; i <= rowIndex + 1; ++i)
        {
            vector<int> apj (i, 1);
            
            for (int j = 1; j < i - 1; ++j)
                apj[j] = vec[j] + vec[j-1];
            vec = apj;
        }
        return vec;
    }
};
