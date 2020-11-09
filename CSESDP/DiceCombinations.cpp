#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main()
{
    int mod = 1e9+7;
   ll n;
   cin>>n;
   vector<ll> dp(n+1,0);
   dp[0]=1;
    for (long long i = 1; i <=n; ++i) {
        for (long long j = 1; j <=6 ; ++j) {
            if (j<=i)
            {
                (dp[i]+=dp[i-j])%= mod;;
            }
        }
    }
    cout<<dp[n];
}
