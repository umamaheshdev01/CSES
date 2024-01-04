#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
 
int main()
{
     ll n;
     cin>>n;
 
     ll ans=1;
     ll mul =2;
 
     while(n)
     {
        if(n%2==1)
        {
             ans= (ans*mul)%mod;
        }
        
        mul = (mul * mul)%mod;
        n=n/2;
     }
 
     cout<<ans<<endl;
}
