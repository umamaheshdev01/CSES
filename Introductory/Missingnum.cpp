#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

void solve()
{
    ll n;cin>>n;

    ll x1=0,x2=0;
    for(int i=1;i<=n;i++)
    {
         x1^=i;
    }

    for(int i=0;i<n-1;i++)
    {
        int k;cin>>k;
        x2^=k;
    }

    cout<<(x1^x2)<<endl;
}

int main()
{
      ll n=1;
      while(n--) solve();
}