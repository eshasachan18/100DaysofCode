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
#define li(n) long n; cin>>n;
#define inti(n) int n;cin>>n;
#define CC int test;\
cin>>test;\
while(test--)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mem(name, value) memset(name, value, sizeof(name))
#define pp pair
# define veci(v) vector<int>v;
#define vecs(s) vector<string>s;
/**prints**/
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define pf(n) cout<<n<<endl;
 #include<iostream>
 #include<bits/stdc++.h>
using namespace std;

 /***...............................................You see you things.You keep quiet about them.And you understand...........................................................***/
int main()
{
   FAST
    inti(n) inti(k)
    vector<long long>v;
    long long x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end(),greater<int>());long long l,b=0;
    if(k>v.size()){pf("-1")}
    else if(k==0){cout<<"0 0"<<endl;}
    else
    {
        cout<<v[k-1]<<" "<<v[k-1]<<endl;
    }
    return 0;
}



















