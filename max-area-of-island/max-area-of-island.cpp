class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0; i<row ; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j])
                    max_area=max(max_area,Area(grid,i,j));
            }
        }
        return max_area;
    }
    
    int Area(vector<vector<int>>& grid, int row, int col){
        
        if(row<0 || col<0 || row>=grid.size() || col >=grid[0].size() || !grid[row][col]){
            return 0;
        }
        grid[row][col]=0;
       return 1+ Area(grid,row-1,col) + Area(grid,row,col-1) + Area(grid,row+1,col) + Area(grid,row,col+1); 
        
    }
};

