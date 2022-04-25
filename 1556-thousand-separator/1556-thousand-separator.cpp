class Solution 
{
public:
    string thousandSeparator(int n) 
    {
        if (n == 0)
            return "0";
        
        std::string res;
        
        int cur = 0;
        while (n)
        {
            res.push_back('0' + (n % 10));
            cur++;
            if (cur % 3 == 0)
            {
                cur = 0;
                if (n / 10 > 0)
                    res.push_back('.');
            }
            n /= 10;
        }
        
        std::reverse(res.begin(), res.end());
        
        return res;
    }
};