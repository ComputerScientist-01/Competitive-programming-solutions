class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int dp[105];
        dp[0]=0;
        dp[1]=nums[0];
        
        for(int i=1; i<n;i++){
            dp[i+1]=max(dp[i], dp[i-1]+nums[i]);  
        }
        return dp[n];
    }
};