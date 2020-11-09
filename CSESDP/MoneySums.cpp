#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll n,sum=0,cnt=0;
    cin>>n;
    vector<ll> x(n);
    for (int i = 0; i <n ; ++i) {
        cin>>x[i];
        sum+=x[i];
    }
    vector<bool> dp(sum+1, false);
    dp[0]=1;
    for (ll j :x) {
        for (ll i = sum; i >=j; --i){
            if (dp[i]== false)
                dp[i]=dp[i-j];
        }
    }
    for (int k = 1; k <=sum ; ++k) {
        if (dp[k])
           cnt+=1;
    }
    cout<<cnt<<"\n";
    for (int k = 1; k <=sum ; ++k) {
        if (dp[k])
            cout<<k<<" ";
    }
    return 0;
}
