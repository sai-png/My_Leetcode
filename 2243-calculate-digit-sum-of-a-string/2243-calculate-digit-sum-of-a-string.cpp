class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k){
            string temp;
            for(int i = 0; i < s.size(); i += k){
                int j = i;
                int num = 0;
                int limit = (i+k) < s.size() ? (i+k) : s.size();
                while(j < limit){
                    num += (s[j] - '0');
                    j++;
                }
                temp += to_string(num);
            }
            swap(s,temp);
        }
        return s;
    }
};