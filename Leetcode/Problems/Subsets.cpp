class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {vector<vector<int>>ans;
      int n=nums.size();
      for(int i=0;i<=pow(2,n)-1;i++)
      {
          int num=i;int k=nums.size();
          vector<int>a;int j=0;
          while(k&&j<n)
          {if(num&1){ a.push_back(nums[j]);}
              num=num>>1;j++;k--;
          }
          ans.push_back(a);
      }
     return ans;
    }
};
