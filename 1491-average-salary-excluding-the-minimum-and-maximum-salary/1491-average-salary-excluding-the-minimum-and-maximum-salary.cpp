class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        sort(salary.begin(),salary.end());
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
        }
        sum=sum-salary[salary.size()-1]-salary[0];
        return sum/(salary.size()-2);
        
    }
};