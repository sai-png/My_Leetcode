class Solution 
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> letter;
        const int sSize = s.size();
        for (int i = 0; i < sSize; ++i)
            ++letter[s[i]];

        for (int i = 0; i < sSize; ++i)
            if (letter[s[i]] == 1)
                return i;
        return -1;
    }
};