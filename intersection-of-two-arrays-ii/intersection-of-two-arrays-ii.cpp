class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map <int,int> mp;
        for(auto it: nums1){
            mp[it]++;
        }
        //calculate frequency of values in nums1
        
        for(auto it : nums2){
            if(mp[it]>0){
                //if frequency is more than 1 push in vector and now dec the counter
                ans.push_back(it);
                mp[it]--;
            }
        }
        return ans;    
    }
    
};