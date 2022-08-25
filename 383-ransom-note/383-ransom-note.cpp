class Solution {
public:
    bool canConstruct(string A, string B) {
        vector<int> vec(26, 0);
        for (int i = 0; i < B.size(); ++i)
            ++vec[B[i] - 'a'];
        for (int j = 0; j < A.size(); ++j)
            if (--vec[A[j] - 'a'] < 0)
                return false;
        return true;
    }
};