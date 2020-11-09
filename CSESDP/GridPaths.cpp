#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int mod = 1e9+7;
    ll n,cnt=0;
    cin>>n;
    vector<vector<char>> a(n,vector<char> (n));
    vector<vector<ll>> dp(n,vector<ll> (n));
    for (int i = 0; i <n; ++i) {
        for (int j = 0; j <n ; ++j) {
            cin>>a[i][j];
        }
    }
    dp[0][0]=1;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n; ++j) {
            if (a[i][j]=='.')
            {
                if (i>0)
                {
                    (dp[i][j]+=dp[i-1][j])%=mod;
                }
                if (j>0)
                {
                    (dp[i][j]+=dp[i][j-1])%=mod;
                }
            }
            else
                dp[i][j]=0;
        }
    }
    cout<<dp[n-1][n-1];
    return 0;
}
