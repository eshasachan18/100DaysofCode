#include<iostream>
#include <map>
using namespace std;
#include<bits/stdc++.h>
int main()
{
int n;
cin>>n;
long long x;
vector<long long>v;
for(int i=0;i<n;i++)
{
    cin>>x;
    v.push_back(x);

}
sort(v.begin(),v.end());
int count=0;
for(int i=1;i<n-1;i++)
{
    if(v[i]>v[0]&&v[i]<v[n-1])
    {
        count++;
    }

}
cout<<count;

}
