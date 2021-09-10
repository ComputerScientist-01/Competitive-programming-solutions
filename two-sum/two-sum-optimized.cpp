class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int,int> mp;
        for(int i=0; i<nums.size();i++){
            int num=nums[i];
            int c =target-num;
            auto it = mp.find(c);
            if (it != mp.end()){
                return{ it->second, i};
            }
            mp[num]=i;
        }
        return {};
    }
};

// Time O(n) - 1 for loop and O(1) lookup time for map  
// Space O(n) - using map
