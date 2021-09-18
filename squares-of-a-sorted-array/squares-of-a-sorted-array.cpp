class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int r,l,k;
        int n= nums.size();
        vector <int> ans(n, 0);
        l=0;
        r=n-1;
        k=n-1;
        while(l<=r)
        {
            if(abs(nums[l])<abs(nums[r]))
            {
                ans[k--]=nums[r]*nums[r];
                r--;
            }
            else
            {
                ans[k--]=nums[l]*nums[l];
                l++;
            }
            
        }
        
        return ans;
    }
};


