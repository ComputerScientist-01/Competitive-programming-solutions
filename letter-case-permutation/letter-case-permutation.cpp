class Solution {

vector<string> ans;    
public:
    vector<string> letterCasePermutation(string s) {
       solve(s,0);
        return ans;
    }
    
    void solve(string s,int i){
         if(s.size()==i){
            ans.push_back(s);
            return;
        }
        
        if(isalpha(s[i])){
            s[i]=toupper(s[i]);
            solve(s,i+1);
            s[i]=tolower(s[i]);
            solve(s,i+1);
        }
        else{
            solve(s,i+1);
        }
        
    }
};