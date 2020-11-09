#include <bits/stdc++.h>
#define ll long long

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
    ll m,n;
    ll mod = 1e9+7;
    cin >> m >> n;
 
    vector <ll> coin(m);
    for(ll&i : coin)
        cin>>i;
 
    vector <ll> dp(n+1,0);
    dp[0] = 1; 
 
    for(ll i:coin)
    {
        for(ll j=0;j<=n;j++)
        {
            if(j-i >= 0)
            {
                dp[j] += dp[j-i];
                dp[j] %= mod;
            }
        }
    }
    cout<<dp[n]<<endl;
 
    return 0;
}
