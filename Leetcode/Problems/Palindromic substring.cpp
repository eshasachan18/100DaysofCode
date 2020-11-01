prob link-https://leetcode.com/problems/palindromic-substrings/
class Solution {
public:
    int countSubstrings(string s) 
    {
        int n=s.length(),c=0;
        int dp[n][n];
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;c++;
        }
         for(int i=0;i<n-1;i++)
        {
             if(s[i]==s[i+1])
             { dp[i][i+1]=1;c++;}
             else
             {dp[i][i+1]=0;}
                 
        }
        
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i+2;j<n;j++)
            {
              
                  if(s[i]==s[j])
                  {
                      if(dp[i+1][j-1]==1)
                      {
                          dp[i][j]=1;c++;
                      }
                      else
                      {
                          dp[i][j]=0;
                      }
                  }
                  else
                  {
                      dp[i][j]=0;
                  }
                  
              }
            
        }
        
        return c;
    }
};
