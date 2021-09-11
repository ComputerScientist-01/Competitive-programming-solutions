class Solution {
public:
        bool isValid(string s) 
    {
        stack<char> st;
        if(s.size() % 2 != 0)
        {
            return false;
        }
        
        for (int i=0; i<s.length();i++)
        {
            if(s[i]=='{'|| s[i]=='[' || s[i]=='(')
            {
                st.push(s[i]);
            }
             else if(s[i]==')' and !st.empty() and st.top()=='(' )
             {
                 st.pop();
             }
             else if(s[i]=='}' and !st.empty() and st.top()=='{' )   
             {
                 st.pop();
             }
             else if(s[i]==']' and !st.empty() and st.top()=='[' )   
             {
                 st.pop();
             }
            else
            {
                return false;
            }
         }
        return st.empty() ?  true : false;   
    }
};



