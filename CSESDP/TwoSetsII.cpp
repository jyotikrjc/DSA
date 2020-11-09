#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<ll> vl ;
int mod = 1e9+7;
ll equal_sum(ll n)
{
    ll sum=0;
    for (int i = 1; i <=n ; ++i) {
        sum+=i;
    }
    if (sum%2!=0)
        return 0;
    sum/=2;
    vector<vl> dp(n,vl (sum+1,0));
    dp[0][0]=1;
    for (int i = 1; i <n; ++i) {
        for (int j = 0; j <=sum; ++j) {
            if (j>=i)
            dp[i][j]=(dp[i-1][j]+dp[i-1][j-i])%mod;
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n-1][sum];
}
int main() {
    ll n;
    cin>>n;
    ll cnt=equal_sum(n);
    cout<<cnt;
}
