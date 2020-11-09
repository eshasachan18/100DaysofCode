class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) 
    {int n=nums.size();
      vector<int>ans;
     if(n==0){return ans;}
     if(n==1){ans.push_back(nums[0]);return ans;}
        sort(nums.begin(),nums.end());
        vector<int>dp(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0)
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
     int ind,maxi=INT_MIN;
     for(int i=1;i<n;i++)
     {
         if(dp[i]>maxi)
         {
             maxi=dp[i];
             ind=i;
         }
     }
    ans.push_back(nums[ind]);
     for(int i=ind-1;i>=0;i--)
     {
         if(ans.back()%nums[i]==0&&dp[i]==maxi-ans.size()){ans.push_back(nums[i]);}
     }
     return ans;
        
    }
};
