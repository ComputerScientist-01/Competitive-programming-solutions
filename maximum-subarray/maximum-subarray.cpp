class Solution {
public:
    int maxSubArray(vector<int>& nums){
    for(int i = 1; i<nums.size(); i++){
        if(nums[i-1] > 0){
            nums[i]+= nums[i-1];
        }
    }

 return *max_element(nums.begin(), nums.end());
}
};
