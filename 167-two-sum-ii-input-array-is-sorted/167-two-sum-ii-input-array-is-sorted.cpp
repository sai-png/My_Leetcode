class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
       int n=numbers.size();
        int i=0;
        int j=n-1;
        int sum=0;
        while(j>i){
           sum=numbers[i]+numbers[j];
            if(sum==target){
               return{i+1,j+1};
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
      return {};    
    }
};
