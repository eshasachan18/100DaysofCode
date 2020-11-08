class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int n=haystack.length();
        int n2=needle.length();
        if(n==n2&&n==0){return 0;}
        for(int i=0;i<n&&i+n2<=n;i++)
        {
            if(haystack.substr(i,n2)==needle){return i;}
            
        }
        return -1;
    }
};
