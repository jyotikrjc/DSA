#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
const int mod = 1e9 + 7;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll a,b;
    cin>>a>>b;
    vector<vector<ll>> dp(a+1,vector<ll> (b+1));
    for (int i = 1; i <=a ; ++i) {
        for (int j = 1; j <=b ; ++j) {
            if (i==j)
                dp[i][j]=0;
            else
            {
                dp[i][j]=1e6;
                for (int k = 1; k <i ; ++k) {
                    dp[i][j]=min(dp[i-k][j]+dp[k][j]+1,dp[i][j]);
                }
                for (int k = 1; k <j ; ++k) {
                    dp[i][j]=min(dp[i][k]+dp[i][j-k]+1,dp[i][j]);
                }
            }
        }
    }
    cout<<dp[a][b];
    return 0;
}
