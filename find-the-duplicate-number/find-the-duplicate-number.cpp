class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int t=nums[0];
        int h=nums[0];
        int p1,p2;
        while(true)
        {
            t=nums[t];
            h=nums[nums[h]];
            if (t == h)
            {
                break;
            }
        } 
        
        
        p1=nums[0];
        p2=t;
        while(p1 != p2)
        {   p1=nums[p1];
            p2=nums[p2];
        }
        return p1;
        
    }
};