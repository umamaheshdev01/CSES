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
    //multiset make it simple for erasing

    multiset<ll> s;
    ll n = sc() , m = sc();

    while(n--) s.insert(sc()) ;
    while(m--)
    {
        ll k = sc();
        auto it = s.upper_bound(k); // value just greater than k
        ll ans = -1;

        if(it!=s.begin())
        {
            it--;
            ans=*it;
            s.erase(it);
        }

        cout<<ans<<endl;
    }
}