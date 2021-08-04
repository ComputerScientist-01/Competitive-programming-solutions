class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(ans, "", 0, 0, n);
        return ans;
        
    }
    
    void backtrack( vector<string> &ans,string cur, int open, int close, int max)
    {
        if(cur.length() == max*2){
            ans.push_back(cur);
            return ;
        }

        if(open<max){
            backtrack(ans,cur+"(",open+1,close,max);

        }

        if(close<open){
            backtrack(ans,cur+")",open,close+1,max);

        }
        
    }
};