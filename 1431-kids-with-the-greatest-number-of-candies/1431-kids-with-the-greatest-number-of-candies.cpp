class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
      int ans=*max_element(candies.begin(),candies.end());
        vector<bool>res;
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=ans)
                res.push_back(true);
                
            else  res.push_back(false);
        }
       return res; 
    }
};