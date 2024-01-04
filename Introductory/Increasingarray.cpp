#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n,0);
 
    for(auto &x:v)
    {
        cin>>x;
    }
 
    ll moves =0;
 
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            moves+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
 
    cout<<moves<<endl;
}