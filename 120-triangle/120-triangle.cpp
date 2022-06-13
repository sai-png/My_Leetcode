class Solution {
public:
   int minTotalUtil(vector<vector<int>>& triangle, int h, int j,vector<vector<int>> &v) {
        if(h == triangle.size()) {
             
            return 0;
        }
         if(v[h][j]!=-1) return v[h][j];  
        
        return v[h][j]=triangle[h][j]+min(minTotalUtil(triangle, h+1, j,v),minTotalUtil(triangle, h+1, j+1,v));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int minSum = INT_MAX;
          int h=triangle.size(),j;
         j=h;
        vector<vector<int>> v(h,vector<int> (j,-1));
          minSum=minTotalUtil(triangle, 0, 0,v);
        
        cout << minSum << endl;
        return minSum;
        
    }
};