#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    ll mini=INT_MAX;
   ll m,n;
   cin>>m>>n;
   vector<ll> dp(n+1,INT_MAX);
   vector<ll> coin(m);
    for (int k = 0; k <m ; ++k) {
        cin>>coin[k];
        mini=min(coin[k],mini);
    }
    if (mini>n)
    {
        cout<<-1;
    } else
    {
        dp[0]=0;
        for (long long i = 1; i <=n; ++i) {
            for (long long j :coin) {
                if (j<=i)
                {
                    dp[i]=min(dp[i-j]+1,dp[i]);
                }
            }
        }
        if (dp[n]==INT_MAX)
            cout<<-1;
        else
            cout<<dp[n];
    }
 
}
