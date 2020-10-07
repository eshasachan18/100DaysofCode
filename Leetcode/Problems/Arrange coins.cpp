class Solution {
public:
    int arrangeCoins(int n) 
    {long long sum=0;
     int count=0;
        for(long long i=1;i<=n&&sum+i<=n;i++)
        {  sum+=i;
        count++;}
     return count;
    }
};
