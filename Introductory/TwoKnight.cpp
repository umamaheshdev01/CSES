#include <bits/stdc++.h>
using namespace std;
 
void solve(long long n)
{
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<6<<endl;
        return;
    }
 
    long long total = ((n*n)*(n*n-1))/2;
    long long attack = 4*(n-1)*(n-2);
    cout<<total-attack<<endl;
}
 
int main()
{
        long long n;
        cin>>n;
 
        for(long long i=1;i<=n;i++)
        {
            solve(i);
        }
}