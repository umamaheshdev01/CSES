#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

void TOH(ll n,ll from,ll to,ll aux,vector<pair<ll,ll>> &ans )
{
    if(n==0)
    {
        return;
    }

    TOH(n-1,from,aux,to,ans);
     ans.push_back({from,to});
    TOH(n-1,aux,to,from,ans);
}


int main()
{
      vector<pair<ll,ll>> ans;
      ll n;cin>>n;

      TOH(n,1,3,2,ans);

      cout<<ans.size()<<endl;

      for(auto x:ans)
      {
        cout<<x.first<<" "<<x.second<<endl;
      }
}