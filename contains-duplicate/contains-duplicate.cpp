class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    sort(nums.begin(),nums.end());
    bool dupli=false;
    int idx=1;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i-1]==nums[i])
        { 
            dupli=true;
            idx++;
        }
    }
    return dupli;       
    }
};