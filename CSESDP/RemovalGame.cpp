//   sum1-sum2=diff;
//sum1-sum2+sum=diff+sum;
//sum1-sum2+sum1+sum2=diff+sum;
//   2sum1=diff+sum;
//   sum1=(diff+sum)/2;
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<ll> vl ;
int main() {
    ll n,sum=0;
    cin>>n;
    vl v(n);
    for (ll i = 0; i <n ; ++i) {
        cin>>v[i];
        sum+=v[i];
    }
    vector<vl> dp(n,vl (n));
    for (ll i = n-1; i >= 0 ; --i) {
        for (ll j = i; j < n; ++j) {
            if (i==j)
                dp[i][j]=v[i];
            else
            dp[i][j]=max(v[i]-dp[i+1][j],v[j]-dp[i][j-1]);
        }
    }
    cout<<(sum+dp[0][n-1])/2;
}
