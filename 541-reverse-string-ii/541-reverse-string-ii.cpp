class Solution {
public:
string reverseStr(string s, int k) {
        if(s.length() < k){
            reverse(s.begin(), s.end());
            return s;
        }
        int start = 0, end = k;
        int a = 1;
        while(start < s.length()){
            if(a % 2 != 0){
                reverse(s.begin() + start, s.begin() + end);
            }
            a++;
            start = end;
            if(end + k >= s.length()){
                end = s.length();
            }else{
                end += k;
            }
        }
        return s;
    }
};