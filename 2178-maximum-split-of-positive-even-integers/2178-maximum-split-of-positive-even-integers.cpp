class Solution {
public:
    vector<long long> maximumEvenSplit(long long x) {
        vector<long long> v;
        if (x%2==1){
            return v;
        }
        for(int i=2;i<=x;i+=2)
        {
            v.push_back(i);
            x=x-i;//28,26,22,16,8,(8+8),0
        }
        v.back()=v.back()+x;
        return v;
    }
};