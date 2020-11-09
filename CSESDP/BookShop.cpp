#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int mod = 1e9+7;
    ll n,x;
    cin>>n>>x;
    vector<ll> h(n),s(n);
    for (int i = 0; i <n ; ++i) {
        cin>>h[i];
    }
    for (int i = 0; i <n ; ++i) {
cin>>s[i];
    }
    vector<ll> dp(x+1);
    for (int i = 0; i < n ; ++i)  {
        for (int j = x; j >= h[i]; --j){
 
            {
                dp[j]=max(dp[j], dp[j - h[i]] + s[i]);
            }
 
        }
    }
    cout<<dp[x];
    return 0;
}
