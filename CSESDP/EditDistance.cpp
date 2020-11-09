#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
const int mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string n,m;
    cin>>n>>m;
    vector<vector<ll>> dp(n.length()+1,vector<ll> (m.length()+1));
    for (int i = 0; i <= n.length(); i++)
        dp[i][0] = i;
    for (int j = 0; j <= m.length(); j++)
        dp[0][j] = j;
    for (int i = 1; i <=n.length() ; ++i) {
        for (int j = 1; j <=m.length() ; ++j) {
            if (n[i - 1] == m[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
 
        }
    }
    cout<<dp[n.length()][m.length()];
    return 0;
}
