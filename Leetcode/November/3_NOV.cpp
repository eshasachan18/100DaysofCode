problem=https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/564/week-1-november-1st-november-7th/3518/
class Solution {
public:
    int maxPower(string s) 
    {
        int n=s.length();
        int i=0,c=1,ans=1;
        while(i<n)
        { c=1;
            int j=i+1;
            while(j<n&&s[j]==s[j-1])
            {
                c++;j++;
            }
            i=j;
             ans=max(ans,c);
            
        }
        return ans;
        
    }
};
