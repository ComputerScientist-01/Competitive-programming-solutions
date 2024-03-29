class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int beg=0;
        int end=nums.size()-1;
        int mid,c;
        while(beg <= end)
        {
            mid=(beg+end)/2;
            
            if(nums[mid] < target){
                beg=mid+1;
            }
            
            else 
                end=mid-1;      
        }
    return beg; 
        
    }
};