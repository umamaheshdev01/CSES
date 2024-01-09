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
    //incoming outhoing method is better than merging method

    ll n = sc();
    vector<PA> p;

    while(n--)
    {
        p.push_back({sc(),1});
        p.push_back({sc(),-1});
    }

    sort(all(p));
    
    ll cur=0,best=0;

    for(auto x:p)
    {
        if(x.second==1)cur++;
        else cur--;
        best = max(best,cur);
    }

    cout<<best<<endl;
}