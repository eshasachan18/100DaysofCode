class Solution {
public:
    int largestPerimeter(vector<int>& A) 
    {
        sort(A.begin(),A.end(),greater<int>());
        int len=A.size();
        for(int i=0;i<len&&i+2<len;i++)
        {
            if(A[i]<A[i+1]+A[i+2])
            {
                return(A[i]+A[i+1]+A[i+2]);
            }
        }
        return 0;
        
    }
};
