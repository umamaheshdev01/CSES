#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll n;
    cin>>n;
    ll total = (n*(n+1))/2;
 
    if(total%2==0)
    {
         cout<<"YES"<<endl;
         vector<int> f;
         vector<int> s;
 
         if(n%2==0)
         {
               for(int i=1;i<n/2;i+=2)
               {
                f.push_back(i);
                f.push_back(n-i+1);
                s.push_back(i+1);
                s.push_back(n-i);
               }
         }
         else
         {
            f.push_back(1);
            f.push_back(2);
            s.push_back(3);
 
            for(int i=4;i<n/2+2;i+=2)
            {
                f.push_back(i);
                f.push_back(n-i+4);
                s.push_back(i+1);
                s.push_back(n-i+3);
            }
         }
 
         cout<<f.size()<<endl;
         for(auto x:f)
         {
            cout<<x<<" ";
         }
 
         cout<<endl;
 
         cout<<s.size()<<endl;
         for(auto x :s)
         {
            cout<<x<<" ";
         }
 
         cout<<endl;
      
    }
    else
    {
         cout<<"NO"<<endl;
    }
 
}
