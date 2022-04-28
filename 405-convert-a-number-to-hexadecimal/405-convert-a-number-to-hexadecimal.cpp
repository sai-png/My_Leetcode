class Solution {
public:
    string toHex(int num) {
        if (num == 0)
            return "0";
        
        string result;
        unsigned n = num;
        while (n) {
            auto rem = n % 16;
            char value = rem >= 10 ? (rem - 10) + 'a' : rem + '0';
            result.push_back(value);
            n /= 16;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};