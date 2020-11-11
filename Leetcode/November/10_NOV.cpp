Prob=https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/565/week-2-november-8th-november-14th/3526/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) 
    {
        for(int k=0;k<A.size();k++)
        {
            int i=0,j=A[k].size()-1;
            while(i<=j)
            {
               int temp=A[k][i];
                A[k][i]=A[k][j];
                A[k][j]=temp;
                
                i++;j--;
            }
        }
        for(int k=0;k<A.size();k++)
        {
            for(int i=0;i<A[k].size();i++)
            {
                A[k][i]=A[k][i]^1;
            }
        }
        return A;
    }
};
