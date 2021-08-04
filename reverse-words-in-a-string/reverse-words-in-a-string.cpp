/*
class Solution {
public:
    string reverseWords(string s) {
       
      
        string sb;

        int i = s.length() - 1;

        while (i >= 0) 
        {
            if (s.at(i) == ' ') 
            {
                i--;
            } 
            else 
            {
                int j = i;
                while (i >= 0 && s.at(i) != ' ') 
                {
                    i--;
                }
                if (sb.length() > 0) 
                {
                    sb.append(" ");
                }
                for (int k = i + 1; k <= j; k++) 
                {
                    char temp = s.at(k);
                    sb+=temp;
                }
            }
        }

        return sb;
    }
};

*/

class Solution {
public:
    string reverseWords(string s) {
        string sb;
        string temp;
        int i=s.length()-1;
        while(i>=0)
        {
            if(s.at(i) == ' ')
            {
                i--;
            }
            else
            {
                int j=i;
            
                while(i>=0 && s.at(i) != ' ')
                {
                    i--;
                }
                if(sb.length()>0)
                {
                    sb.append(" ");
                }
                for(int k=i+1; k<=j; k++)
                {
                    temp=s.at(k);
                    sb+=temp;
                }
            }
            
            
        }
        return sb;
        
    }
};