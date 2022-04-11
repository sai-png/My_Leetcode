class Solution {
public:

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];

      if(color==newColor){return image;}
      int row = image.size();
      int col = image[0].size();
      vector<vector<int>>direc = {{-1,0}, {1, 0}, {0,1}, {0,-1}};
       queue<pair<int,int>>q;
      q.push({sr, sc});
      while(!q.empty()){
        auto pos = q.front();
        q.pop();
        int x = pos.first;
        int y = pos.second;
        if(image[x][y]==color){
          image[x][y]=newColor;
        for(auto dir : direc){
          int a = x + dir[0];
          int b = y + dir[1];
          if(a >= 0 && b >= 0 && a<row && b<col && image[a][b]==color)
            q.push({a, b});
        }
        }
      }
    return image;
    }
  
};