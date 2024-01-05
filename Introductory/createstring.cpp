#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

void solve()
{
    string s;cin>>s;

    vector<string> ans;
    sort(s.begin(),s.end());

    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));


    cout<<ans.size()<<endl;

    for(auto x: ans)
    {
        cout<<x<<endl;
    }

}

int main()
{
      solve();
}