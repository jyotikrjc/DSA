#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e7+7;
#define lli long long int
#define li long int
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cout.tie(0);
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
    ll sum1=0,sum2=0,sum=0,n,ans=0;
    cin>>n;
    vector<ll> p(n);
    for (ll i = 0; i <n ; ++i) {
        cin>>p[i];
        sum+=p[i];
    }
//    for (ll i = n-1; i >=0 ; --i) {
//        if (sum1+a[i]<=sum)
//            sum1+=a[i];
//        else
//            sum2+=a[i];
//    }
//    cout<<abs(sum1-sum2);
    for (int i = 0; i < 1 << n; ++i)
    {
        ll cs = 0;
        for (int j = 0; j < n; ++j)
            if (i >> j & 1)
                cs += p[j];
        if (cs <= sum / 2)
            ans = max(ans, cs);
    }
    cout<<abs((sum-ans)-ans)<<"\n";
    return 0;
}
