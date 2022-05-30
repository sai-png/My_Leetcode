class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int size=salary.size()-2;
        sort(salary.begin(),salary.end());
        int max=salary[salary.size()-1];
        int min=salary[0];
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
        }
        sum=sum-max-min;
        return sum/size;
        
    }
};