class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                m[nums[i]]++;
            }
            else
            {
                m.insert(make_pair(nums[i],1));
            }
        }
        for(auto it=m.begin();it!=m.end();++it)
        {
            if(it->second==1)
            {
                int ans= it->first;
                 return ans;
            }        
        }
       return 0;
    }
};
