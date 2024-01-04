#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) v.begin(),v.end()
#define srt(v) sort(all(v))


vector<string> gray(ll n)
{
    vector<string> res;

    if(n==1)
    {
        res.push_back("0");
        res.push_back("1");
        return res;
    }

    vector<string> prev = gray(n-1);

    for(ll i=0;i<prev.size();i++)
    {
           res.push_back("0"+prev[i]);
    }

    for(ll i=prev.size()-1;i>=0;i--)
    {
           res.push_back("1"+prev[i]);
    }

    return res;
}

int main()
{
      ll n;cin>>n;

      vector<string> ans = gray(n);

      for(auto x:ans)
      {
          cout<<x<<endl;
      }

}