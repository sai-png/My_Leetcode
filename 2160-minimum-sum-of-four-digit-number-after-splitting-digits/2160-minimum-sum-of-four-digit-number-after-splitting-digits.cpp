class Solution {
public:
    int minimumSum(int num) {
        int a, b, c, d;
        vector<int> arr;
        
        a = num%10, num/=10;
        b = num%10, num/=10;
        c = num%10, num/=10;
        d = num%10, num/=10;
        
        arr = {a, b, c, d};
        sort(arr.begin(), arr.end());
        
        return (10*arr[0]+arr[2])+(10*arr[1]+arr[3]);
    }
};