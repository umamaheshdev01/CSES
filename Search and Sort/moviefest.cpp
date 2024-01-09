#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;
double EPS = 1e-12;
typedef long long int ll;
typedef pair<ll,ll> PA;
#define rep(i,a,n) for(long long int i=a;i<n;i++)
#define repd(i,a,n) for(long long int i=a;i>=n;i--)
#define all(v) v.begin(),v.end()
#define sz(a) a.size()
inline ll sc() { ll a; cin>>a; return a; }
#define lim 300010
#define lim2 200010
ll A[lim];

int main()
{
    ll n=sc();
    ll m =n;
    vector<PA> v;
    //take the finish time first and then sort
    while(n--)
    {
       ll a = sc();
       ll b = sc();
       v.push_back({b-1,a});
    }

    sort(all(v));
    ll ans =1;
    ll last = v[0].first;

    rep(i,1,m)
    {
        if(v[i].second<=last)continue;
        last = v[i].first; 
        ans++;
    }

    cout<<ans<<endl;
      
}