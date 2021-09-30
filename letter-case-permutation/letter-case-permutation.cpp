class Solution {

vector<string> ans;    
public:
    vector<string> letterCasePermutation(string s) {
       solve(s,0);
        return ans;
    }
    
    void solve(string s,int i){
         if(s.size()==i){ //base case
            ans.push_back(s);
            return;
        }
        
        if(isalpha(s[i])){
            s[i]=toupper(s[i]); // sub case 1, considering upper case
            solve(s,i+1); // Append toupper(s[i]) to s[i] and go to next index (i+1).
            s[i]=tolower(s[i]); //sub case 2, considering lower case
            solve(s,i+1); // Append tolower(s[i]) to s[i] and go to next index (i+1).
        }
        else{
            solve(s,i+1);
        }
        
    }
};
