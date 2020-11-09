class Solution {
public:
    bool isPerfectSquare(int num) 
    {int flag=0;
     if(num==1){return true;}
        for(long long i=1;i<=num/2&&i*i<=num;i++)
        {
            if(i*i==num){flag++;break;}
        }
        if(flag==0){return false;}
        else{return true;}
    }
};
