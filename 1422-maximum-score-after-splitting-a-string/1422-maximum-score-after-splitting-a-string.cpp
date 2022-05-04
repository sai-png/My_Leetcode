class Solution 
{
public:
    int maxScore(string& s) 
    {
        int sum[500];
        std::memset(sum, 0, 500 * sizeof(int));
        sum[s.length() - 1] = s[s.length() - 1] - '0';
        for (int i = s.length() - 2; i >= 0; i--)
        {
            sum[i] += sum[i + 1] + (s[i] - '0');
        }
        
        int M = 0;
        int count_zero = 0;
        for (int i = 0; i <= s.length() - 2; i++)
        {
            if (s[i] == '0')
                count_zero++;
            
            M = std::max(M, count_zero + sum[i + 1] - sum[s.length() - 1] + (s[s.length() - 1] - '0'));
        }
        return M;
    }
};