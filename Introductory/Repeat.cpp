#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
     string s;
     cin>>s;
 
     int n = s.length();
 
     int i =0;
     int maxi=1;
 
     for(int j=0;j<n;j++)
     {
        char cur = s[j];
 
        if(cur==s[i])
        {
            maxi=max(maxi,j-i+1);
        }
        else{
            i=j;
        }
     }
 
     cout<<maxi<<endl;
}