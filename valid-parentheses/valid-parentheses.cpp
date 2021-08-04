
class Solution {
public:
    bool isValid(string s) {
    vector<char> st;
    for (char &c: s)
    {
        if (c == '(')
			st.push_back(')');
		else if (c == '{')
			st.push_back('}');
		else if (c == '[')
			st.push_back(']');
		else 
        {
            
            if (st.empty() || st[st.size()-1] != c)
			return false;
        st.pop_back();
        }
    }
    return st.empty();
    }
};