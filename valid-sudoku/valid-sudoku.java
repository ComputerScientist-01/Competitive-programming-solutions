class Solution {
    public boolean isValidSudoku(char[][] board) {
        HashSet <String> seen = new HashSet();
        for (int i = 0; i < 9; i++) 
        {
            for (int j = 0; j < 9; j++) 
            {
                char curr = board[i][j];
                if(curr != '.')
                {
                   if(!seen.add(curr+"row"+i) || !seen.add(curr+"col"+j) || !seen.add(curr+"box"+i/3+"-"+j/3))
                   {
                    return false; 
                   }
                }
            }
         }
        return true;  
    }
}

// The function adds the element only if the specified element is not already present in the set 
//else the function return False if the element is already present in the Set.
// hence we can solve the question in one single set 
