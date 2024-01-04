#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

void solve()
{
    ll m,n;
    cin>>m>>n;

    ll l = max(m,n);
    ll s = min(m,n);

    if((l+s)%3!=0 || l>2*s)
    {
         cout<<"NO"<<endl;
         return;
    }

    cout<<"YES"<<endl;
}

int main()
{
      ll n;
      cin>>n;
      while(n--) solve();
}