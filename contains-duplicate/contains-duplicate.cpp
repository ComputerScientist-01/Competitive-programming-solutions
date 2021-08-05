class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set <int> dup;
        dup=set(nums.begin(),nums.end());
        
        if(nums.size()>dup.size())
        {
            return true;
        }
        else 
            return false;
        
        
    }
};