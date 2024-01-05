#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define all(v) (v.begin(),v.end())
#define srt(v) sort(all(v))

ll power(ll num,ll n)
{
    if (n==0) return 1;

    ll half = power(num,n/2);

    if(n%2)
    {
        return half*half*num;
    }

    return half*half;
}

void solve()
{       
        ll k;
        cin >> k;
        ll n = 1, sum = 0;
        do
        {
            sum = sum + 9 * n * power(10,n - 1);
            n++;
        } while (k >= sum);

        n--;

        ll away = (sum - k) / n;
        ll remainder = (sum - k) % n;
        ll number = (power(10,n) - 1) - away;
        

        
        string result = to_string(number);
        reverse(result.begin(),result.end());
        cout<<result[remainder]<<endl;


}

int main()
{
      ll n;
      cin>>n;
      while(n--) solve();
}