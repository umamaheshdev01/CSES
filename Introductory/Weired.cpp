#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

void solve()
{
    ll n;cin>>n;
    cout<<n<<" ";

    while(n!=1)
    {
        if(n&1)
    {
        n=n*3+1;
        cout<<n<<" ";
    }
    else
    {
         n=n/2;
         cout<<n<<" ";
    }
    }
}

int main()
{
      ll n=1;
      while(n--) solve();
}