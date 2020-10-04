/***......................................you are alive at this moment and no one can steal that from you.....................................................................***/
#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define MAX3(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
#define MIN3(a,b,c) (a<b?(a<c?a:c):(b<c?b:c))
#define len(str) int len=str.length()
#define toStr(n,st) ({\
ostringstream s;\
s.clear();\
s<<n;\
st=s.str();\
})
/*_____________define and inputs______________*/
#define ll(n) long long n; cin>>n;
#define l(n) long n; cin>>n;
#define inti(n) int n;cin>>n;
#define CC int test;\
cin>>test;\
while(test--)
#define YES if(!flag) cout<<"YES\n";
#define NO else cout<<"NO\n";
/*** Loops ***/
#define forIn(arr, num) for(long long i = 0; i < num; i++) cin >> arr[i];
#define for0(num) for(long long i = 0; i < num; i++)
#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
/*** Abbrevations **/
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mem(name, value) memset(name, value, sizeof(name))
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())
/*** Some Prints ***/
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define pf(s) cout<<s<<endl;
/*** STLs ***/
#include<bits/stdc++.h>
 /***...............................................You see you things.You keep quiet about them.And you understand...........................................................***/
class Solution {
public:
    bool isPalindrome(string s)
    {
        vector<char>v;
        for0(s.length())
        {
            if((int)s[i]>=97&&s[i]<=122)
            {
                v.pb(s[i]);
            }
            else if((int)s[i]>=65&&(int)s[i]<=90)
            {
                v.pb(s[i]);
            }
            else if((int)s[i]>=48&&(int)s[i]<=57){v.pb(s[i]);}
        }
        transform(v.begin(), v.end(), v.begin(), ::tolower);
        int i=0,count=0;
        int j=v.size()-1;
        while(i<=j)
        {
            if(v[i]!=v[j])
            {
               return false;
            }
             i++;j--;
            
        }
        return true;
        
    }
};























