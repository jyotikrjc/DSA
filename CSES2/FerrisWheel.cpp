#include <bits/stdc++.h>
#define ll long long int
#define l long int
#define ld long double
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,cnt=0;
    cin>>n>>m;
   vector<ll> a(n);
    for (ll i = 0; i <n ; ++i) {
       cin>>a[i];
    }
    sort(a.begin(),a.end());
    for (ll i=0, j = n-1; i <= j;) {
        if (a[j]+a[i]<=m)
        {
          ++i;--j;
        }
        else
        {
            --j;
        }
        cnt+=1;
    }
    cout<<cnt;
    return 0;
}
