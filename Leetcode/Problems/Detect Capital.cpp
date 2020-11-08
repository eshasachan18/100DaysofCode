Problem=https://leetcode.com/problems/detect-capital/
class Solution {
public:
    bool detectCapitalUse(string s)
    {
     int i=0;int flag=0;
        if(s[i]>='A'&&s[i]<='Z')
        {
            if(s.length()>1)
            {
                if(s[1]>='A'&&s[1]<='Z')
                {
                    for(int j=1;j<s.length();j++)
                    {
                        if(s[j]>='a'&&s[j]<='z'){flag++;break;}
                    }
                }
                else if(s[1]>='a'&&s[1]<='z')
                {
                    for(int j=1;j<s.length();j++)
                    {
                        if(s[j]>='A'&&s[j]<='Z'){flag++;break;}
                    }
                }
                
            }
            
        }
        else
        {
            for(int j=1;j<s.length();j++)
            {
                if(s[j]>='A'&&s[j]<='Z'){flag++;break;}
            }
        }
        if(flag==0){return true;}
        else{return false;}
    }
};
