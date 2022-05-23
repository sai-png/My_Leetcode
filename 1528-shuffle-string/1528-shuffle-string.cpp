class Solution 
{
public:
    string restoreString(const string& s, vector<int>& indices) 
    {
        std::string res(s.length(), ' ');
        for (int i = 0; i < indices.size(); i++)
        {
            res[indices[i]] = s[i];
        }
        
        return res;
    }
};