class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> s1hash(26,0);
        vector <int> s2hash(26,0);
        int len1=s1.size();
        int len2=s2.size();
        
        if(len1>len2){
            return false;
        }
        
        int l=0;
        int r=0;
        // preprocessing the hashmaps
        while(r < len1)
        {
            s1hash[s1[r]-'a']+=1;
            s2hash[s2[r]-'a']+=1;
            r+=1;
        }
        r-=1; // to point r to end of window
        while(r< len2)
        {
            if(s1hash == s2hash)
            {
                return true;
            }
            
            r+=1;
            
            if(r != len2)
            {
                s2hash[s2[r]-'a']+=1;
            }
            
            s2hash[s2[l]-'a']-=1;
            l+=1;
        }
        return false;
        
        
    }
};