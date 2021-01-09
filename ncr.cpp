#include <bits/stdc++.h>
using namespace std;
const int mod =  1000000007;
typedef long long ll ;
int fac[100005];
ll power(ll x, ll n, ll m=mod){
    ll res = 1;
    while(n){
        if(n&1){
            res = res * x % m;
        }
        x = x * x % m;
        n>>=1;
    }
    return (res%m);
}

ll ncr(ll n,ll r)
{
    return fac[n]*((power(fac[n-r], mod-2)*power(fac[r], mod-2))%mod)%mod;
}
