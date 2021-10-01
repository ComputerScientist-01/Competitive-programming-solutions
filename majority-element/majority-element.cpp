class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        auto size=nums.size()/2;
        for(auto i:nums){
            mp[i]++;
            if(mp[i]>size) return i;
        }
        return 0;
    }
};