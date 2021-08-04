class Solution {
public:
    void sortColors(vector<int>& nums) {
int zeroAns = 0;
        int oneAns = 0;
        int twoAns = 0;
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)==0) zeroAns++;
            else if(nums.at(i)==1) oneAns++;
            else twoAns++;
        }
        
        for(int i=0;i<zeroAns;i++){
            nums[i]=0;
        }
        for(int i=0;i<oneAns;i++){
            nums[i+zeroAns]=1;
        }
        for(int i=0;i<twoAns;i++){
            nums[i+zeroAns+oneAns]=2;
        }
        
    }
};