class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int n1=num1.length();
        int n2=num2.length();
        if(n1>n2){num2.insert(0,n1-n2,'0');}
        else{num1.insert(0,n2-n1,'0');}
        int c=0;
        int i=num1.length()-1;string str="";
        while(i>=0)
        {
            int n=num1[i]+num2[i]-'0'-'0'+c;
            if(n>9){c=n/10;}
            else{c=0;}
            str.push_back(n%10+'0');
            i--;
            
        }
        if(c!=0){str.push_back(c+'0');}
        reverse(str.begin(),str.end());
        return str;
        
        
    }
};
