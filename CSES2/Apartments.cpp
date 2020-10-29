#include <bits/stdc++.h>
#define ll long long int
#define l long int
#define ld long double
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
   vector<ll> a(n),b(m);
    for (ll i = 0; i <n ; ++i) {
       cin>>a[i];
    }
    for (ll j = 0; j <m ; ++j) {
        cin>>b[j];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<bool> visited(n,0);
    ll cnt=0;
    int i = 0, j = 0,ans=0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout <<ans;
    return 0;
}
