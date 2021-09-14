class Solution {
public:
    bool canConstruct(string s, string t) {
        unordered_map<char, int> mp;
        for (char c : t)
        {
            mp[c]++;
        }
        for (char c : s)
        {
            
            if (mp[c] == 0)
            {
                return false;
            }
            mp[c]--;
        }

        return true;
    }
};