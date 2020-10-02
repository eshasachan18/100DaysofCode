/* Question- Combination Sum */
class Solution {
   
public:
    vector<vector<int>> combinationSum(vector<int>& c, int target) 
    {
        sort(c.begin(),c.end());
        vector<vector<int>>ans; 
        vector<int>v;
        func(v,ans,target,0,c);
        return ans;
        
    }

    void func( vector<int>v,vector<vector<int>>&ans,int sum,int ind,vector<int> &c)
    {
        if(!sum)
        {
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<c.size()&&c[i]<=sum;i++)
        {
            v.push_back(c[i]);
            func(v,ans,sum-c[i],i,c);
              v.pop_back();
        }
    }
};
