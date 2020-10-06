class Solution {
public:
    int bitwiseComplement(int N)
    {if(N==0){return 1;}
        int a=N;int i=0;
        while(a)
        {
          N=N^(1<<i);
            a=a>>1;i++;
        }
     return N;
    }
};
