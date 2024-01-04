#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    ll m,n;
    cin>>m>>n;
    ll ans;
    if(m>=n)
    {
       if(m&1)
       {
          ans=(m-1)*(m-1)+ 1;
          ans = ans-1+n;
       }
       else
       {
            ans=m*m;
            ans=ans-n+1;
       }
    }
    else
    {
 
        if(n&1)
        {
             ans=n*n;
             ans = ans-m+1;
        }
        else
        {
            ans=(n-1)*(n-1) + 1;
            ans = ans -1+m;
        }
 
    }
 
    cout<<ans<<endl;
}
 
int main()
{
    ll n;cin>>n;
    while(n--) solve();
}