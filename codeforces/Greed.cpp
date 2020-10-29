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
    int n;cin>>n; vector<long long>a,b;long long x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.pb(x);
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        b.pb(x);
    }
    sort(b.begin(),b.end(),greater<int>());
    long long sum=0,f=0;
    for(int i=0;i<2;i++)
    {
        sum+=b[i];
    }
    for(int i=0;i<n;i++)
    {
        f+=a[i];
    }

    if(f<=sum)
        {cout << "YES" << endl;}
    else{cout << "NO" << endl;}
    return 0;
}



















