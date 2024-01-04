#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

void solve()
{
    ll n;
    cin>>n;

    ll count = 0;
    ll five = 5;
    while(n/five)
    {
        count+=n/five;
        five*=5;
    }

    cout<<count<<endl;
}

int main()
{
      ll n=1;
      while(n--) solve();
}