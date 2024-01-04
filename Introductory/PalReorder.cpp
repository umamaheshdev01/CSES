#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))



void solve()
{
    string s;
    cin>>s;

    ll n = s.length();
    ll i =0;
    ll j = n-1;

    bool flag = true;

    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
            continue;
        }
        else
        {
            char cur = s[i];
            ll ind =-1;

            for(ll k=i+1;k<j;k++)
            {
                if(cur==s[k])
                {
                    ind=k;
                    break;
                }
            }

            if(ind==-1)
            {
                swap(s[i],s[n/2]);
            }
            else
            {
                swap(s[ind],s[j]);
            }

            if(s[i]!=s[j])
            {
                flag = false;
                break;
            }
        }

        i++;
        j--;
    }
   
   if(flag)
   {
    cout<<s<<endl;
   }
   else
   {
    cout<<"NO SOLUTION"<<endl;
   }

}

int main()
{
      ll n=1;
      while(n--) solve();
}