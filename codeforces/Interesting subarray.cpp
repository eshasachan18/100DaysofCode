#include<iostream>
 #include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
/**typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpl; **/
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef map<int,int>mi;
typedef map<ll,ll> ml;
typedef set<string> ss;
typedef set<char>sc;
typedef set<int> si;
typedef set<ll> sl;
#define veci(a) vector<int>a;
#define vecll(a) vector<long long>a;
#define vecs(a) vector<string>a;
#define forIn(arr, num) for(ll i = 0; i < num; i++) cin >> arr[i];
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
#define for0(n) for(int i=0;i<n;i++)
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
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
/**prints**/
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define pf(n) cout<<n<<endl;
 bool sort_by_sec(pair<long long,long long>&a,pair<long long,long long>&b)
 {
     return a.second<b.second;
 }
/* ascii value
A=65,Z=90,a=97,z=122
*/

 /***...............................................You see you things.You keep quiet about them.And you understand...........................................................***/
int main()
{
  FAST
  CC
  {
      inti(n)
    vector<long long> a(n);int count=0;
      forIn(a,n)
      for(int i=0;i<n-1;i++)
      {
          if(abs(a[i+1]-a[i])>1)
          {
              yes
              cout<<i+1<<" "<<i+2<<endl;
              count++;
              break;
          }
      }
      if(count==0){no}

  }

}

















