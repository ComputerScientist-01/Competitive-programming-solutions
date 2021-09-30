class Solution {
private:
     vector<vector<int>> ans;
     vector<int> nums;

public:
    vector<vector<int>> combine(int n, int k) {
       backtrack(n,k,1);
        return ans;
    }
    
    void backtrack(int n, int k,int start){
        if(nums.size()==k){
            ans.push_back(nums);
            return;
        }
        
        for(int i=start; i<=n; i++){
        nums.push_back(i);    
        backtrack(n,k,i+1);
        nums.pop_back();
        }
        
    }


};