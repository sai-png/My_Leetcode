class Solution {
public:
    int maxProduct(vector<string>& words) {
        // support variables
        int len = words.size(), alpha[len], lengths[len], res = 0, pos = 0;
        for (int i = 0, j; i < len; i++) {
            // resetting char checking variables
            string tmp = words[i];
            j = 0;
            for (char c: tmp) {
                j |= 1 << (c - 'a');
                // exiting if all chars were found
                if (j == 67108863) break;
            }
            // storing only words without all the alphabet letters
            if (j != 67108863) {
                alpha[pos] = j;
                lengths[pos++] = tmp.size();
            }
        }
        pos--;
        // checking pairs
        for (int i = 0; i < pos; i++) {
            for (int j = i + 1; j <= pos; j++) {
                if ((alpha[i] & alpha[j]) == 0) {
                    res = max(res, lengths[i] * lengths[j]);
                }
            }
        }
        return res;
    }
};
