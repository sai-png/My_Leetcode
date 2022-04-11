class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter =0;
        vector<int > temp;
        for(int i = 0; i<grid[0].size()+2; i++){
            temp.push_back(0);
        }
        int t = grid.size();
        for(int i = 0; i<t; i++){
            grid[i].insert(grid[i].end() , 0);
            grid[i].insert(grid[i].begin() , 0);
        }
        grid.insert(grid.begin(),temp);
        grid.insert(grid.end(),temp);
        
        
        
        for(int i =1 ; i<grid.size();i++){
            for(int j =1; j<grid[i].size(); j++){
                if(grid[i][j] == 1){
                    if(grid[i][j-1] == 0){
                        perimeter++;
                    }
                    if(grid[i][j+1] == 0){
                        perimeter++;
                    }
                    if(grid[i-1][j] == 0){
                        perimeter++;
                    }
                    if(grid[i+1][j] == 0){
                        perimeter++;
                    }
                }   
            }
        }
        return perimeter;
    }
};