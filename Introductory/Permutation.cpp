#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void prints()
{
    ll n;
    cin>>n;
 
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
 
    if(n<=3)
    {
        cout<<"NO SOLUTION";
        return;
    }
 
    if(n==4)
    {
        cout<<"3 1 4 2"<<endl;
        return;
    }
 
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
 
    for(int i=2;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
 
}
 
int main()
{
    prints();
}