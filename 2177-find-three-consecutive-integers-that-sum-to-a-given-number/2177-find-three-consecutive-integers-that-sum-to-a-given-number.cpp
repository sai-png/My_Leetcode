class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> v;
        if(num%3!=0)
            return {};
       long long res=num/3;
        v.push_back(res-1);
        v.push_back(res);
        v.push_back(res+1);
        return v;
        
    }
};