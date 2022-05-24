class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
          int sub=0;
        for(int j=i;j<arr.size();j++){
            sub+=arr[j];
        if((j-i+1)%2!=0)
            sum+=sub;
            }
        }
        return sum;
    }
};

