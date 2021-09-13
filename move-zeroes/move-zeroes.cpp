class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int exp=0,anchor=0;
        for(exp =0; exp<nums.size();exp++){
            if(nums[exp] != 0)
            {
                swap(nums[exp],nums[anchor]);
                anchor++;
            }
        }
        
    }
};