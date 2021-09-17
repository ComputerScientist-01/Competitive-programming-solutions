class Solution {
public:
    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int beg=0;
        int end=nums.size()-1;
        int mid,c;
        while(beg <= end)
        {
            mid=(beg+end)/2;
            
            if(nums[mid] == target)
            {
                c=1;
                return mid ;
            }
            
            else if(target>nums[mid]) beg=mid+1;
            
            else end=mid-1;
        
        }
    return -1; 
    }
};