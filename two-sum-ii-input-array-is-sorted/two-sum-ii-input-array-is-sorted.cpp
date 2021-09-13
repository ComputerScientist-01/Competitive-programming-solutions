class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int left=0, right=nums.size()-1;
        while(left<right)
        {
            int sum=nums[left]+nums[right];
            if (target == sum)
            {
                return{left+1,right+1};
            }
            else if(target>sum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return nums;
    }
};
