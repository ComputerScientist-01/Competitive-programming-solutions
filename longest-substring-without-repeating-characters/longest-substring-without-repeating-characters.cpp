class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> mp(256,-1);
        int maxLen=0,start = -1;
        
        for(int i=0; i<s.size();i++){
            if(mp[s[i]]>start){
                start=mp[s[i]];
            }
            mp[s[i]]=i;
            maxLen=max(maxLen,i-start);
        }
        return maxLen;
    }
};