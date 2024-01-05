#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

void subseq(vector<ll> v,ll s1,ll s2,ll i,ll &ans)
{
     if(i==v.size())
     {
         ans = min(ans,abs(s1-s2));
         return;
     }

     subseq(v,s1+v[i],s2,i+1,ans); //include one exclude other
     subseq(v,s1,s2+v[i],i+1,ans);
}

void solve()
{
    ll ans = INT_MAX;
    ll n ;cin>>n;

    vector<ll> v(n,0);
    for(auto &x:v)
    {
        cin>>x;
    }

    subseq(v,0,0,0,ans);
    cout<<ans<<endl;
}

int main()
{
      solve();
}