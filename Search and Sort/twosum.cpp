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
ll B[lim];


int main()
{
    ll n = sc() , m = sc();
    vector<pair<ll,ll>> v;

    rep(i,0,n) v.push_back({sc(),i+1});
    sort(v.begin(),v.end());
    //two sum
    ll i=0,j=n-1;
    while(i<j)
    {
        ll sum = v[i].first+v[j].first;

        if(sum==m)
        {
            cout<<v[i].second<<" "<<v[j].second<<endl;
            return 0;
        }
        else if(sum>m)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout<<"IMPOSSIBLE"<<endl;


}