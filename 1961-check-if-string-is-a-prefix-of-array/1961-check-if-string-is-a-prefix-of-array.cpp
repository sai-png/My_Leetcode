class Solution 
{
public:
    bool isPrefixString(const string& s, vector<string>& words) 
    {
        int is = 0;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].length(); j++)
            {
                if (s[is] != words[i][j])
                    return false;
                is++;
                if (is == s.length())
                    return j == words[i].length() - 1;
            }
        }
        
        return false;
    }
};