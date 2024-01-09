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
    ll n=sc(),m=sc();
    rep(i,0,n) A[i]=sc();
    sort(A,A+n);
    int i = 0,j=n-1,done=0;
    ll cur=0;

    while(i<=j)
    {
        ll sum=A[i]+A[j];

        if(sum<=m)
        {
            i++;
            j--;
            done++;
        }
        else
        {
            j--;
            done++;
        }
    }

    cout<<done<<endl;

}               