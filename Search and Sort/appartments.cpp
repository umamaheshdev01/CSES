#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;

    vector<ll> user(n,0);
    for(auto &x:user)cin>>x;
    sort(user.begin(),user.end());

    vector<ll> app(m,0);
    for(auto &x:app)cin>>x;
    sort(app.begin(),app.end());

    ll i=0,j=0;
    ll count =0;

    while(i<n && j<m)
    {
        if(k>=abs(user[i]-app[j]))
        {
             count++;
             i++;
             j++;
        }
        else
        {
             if(user[i]>app[j])
             {
                j++;
             }
             else
             {
                i++;
             }
        }
    }
    
    cout<<count<<endl;

}

int main()
{
      solve();
}