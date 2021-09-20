class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c));
        
        int row= size(mat), column=size(mat[0]);
        int total= row*column;
        if(r*c != total ) return mat;
        int row_nums=0;
        int col_nums=0;
        
        for(int i=0; i<row;i++){
            for(int j=0; j<column;j++){
                ans[row_nums][col_nums]=mat[i][j];
                col_nums++;
                if(col_nums==c){
                    row_nums++;
                    col_nums=0;
                }
            }
        }
        
        return ans;

        
    }
};