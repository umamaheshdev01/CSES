#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

void solve()
{
    ll n;cin>>n;
    vector<ll> v(n,0);
    for(auto &x:v) cin>>x;
    sort(v.begin(),v.end());

    ll count =1;
    ll cur = v[0];

    for(ll i=1;i<n;i++)
    {
        if(v[i]==cur) continue;

        cur = v[i];
        count++;
    }


    cout<<count<<endl;


}

int main()
{
      solve();
}