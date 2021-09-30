class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
       permute(nums,0);
        return ans;
    }
    
    void permute(vector <int>&nums , int idx){
        if(idx== nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=idx; i<nums.size();i++){
            swap(nums[i],nums[idx]);
            permute(nums,idx+1);
            swap(nums[i],nums[idx]);
        }
        return;
    }

private:
     vector<vector<int>> ans;
    
};