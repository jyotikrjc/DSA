#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    int mod = 1e9+7;
   ll m,n;
   cin>>m>>n;
   vector<ll> dp(n+1,0);
   vector<ll> coins(m);
    for (int k = 0; k <m ; ++k) {
        cin>>coins[k];
    }
   dp[0]=1;
    for (long long i = 1; i <=n; ++i) {
        for (long long j :coins) {
            if (j<=i)
            {
                (dp[i]+=dp[i-j])%= mod;;
            }
        }
    }
    cout<<dp[n];
}
