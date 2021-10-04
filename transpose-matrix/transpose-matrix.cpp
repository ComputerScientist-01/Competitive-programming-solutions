class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        //No of rows
        int rows=matrix.size();
        //No of columns
        int cols=matrix[0].size();
        vector<vector<int>> ans(cols , vector<int>(rows,0));
        //Transpose of the matrix
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
               ans[j][i] = matrix[i][j]; 
            }
        }
        return ans;
    }
};



